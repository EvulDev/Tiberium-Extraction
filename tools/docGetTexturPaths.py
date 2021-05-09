1#!/usr/bin/env python3

import sys
import os
import glob
__version__ = 1.0

def printMdDocument(textures):

    print("# Unused Textures")
    print("Here you can find texture paths to unused textures in the mod. All textures are pressent and you can obtain them by utalizing [`setObjectTextureGlobal`](https://community.bistudio.com/wiki/setObjectTextureGlobal) or the TexturePath input on the eden object used if one exist." )
    for t in textures:
        print("- {}".format(t))

def main():
    scriptPath  = os.path.realpath(__file__)
    scriptRoot  = os.path.dirname(scriptPath)
    projectRoot = os.path.dirname(os.path.dirname(scriptPath))
    addonPath   = os.path.join(projectRoot,'addons')

    os.chdir(projectRoot)

    modMAINPREFIX = "z"
    modPREFIX = "tibe"

    #Get Textures
    rawPaths = []
    for (path, dirs, files) in os.walk(addonPath):
        for addon in dirs:
            dataFolder = os.path.join(path, addon, "data")
            for (dataPath, dataDirs, dataFiles) in os.walk(dataFolder):
                for subDir in dataDirs:
                    rawPaths.extend(glob.glob(os.path.join(dataPath, subDir, "*.paa")))
                rawPaths.extend(glob.glob(os.path.join(dataPath, "*.paa")))
        break
    
    allTextures=[]
    for i in rawPaths:
        relPath = os.path.relpath(i, scriptRoot)
        fixedPath = relPath.replace("..", "{}\\{}".format(modMAINPREFIX,modPREFIX))
        if not fixedPath in allTextures:
            allTextures.append(fixedPath)

    # get Configs
    usedTextureFiles=[]
    for (path, dirs, files) in os.walk(addonPath):
        for f in files:
            if f == "$PBOPREFIX$":
                configFile = open(os.path.join(path,f), 'r')
                config = configFile.readlines()
                for PBOPREFIXLINE in config:
                    pboFrefixModPath = PBOPREFIXLINE
                    continue
            if not f in ["CfgVehicles.hpp", "CfgWeapons.hpp", "CfgMarkers.hpp", "CfgFactionClasses.hpp", "CfgUnitInsignia.hpp"]:
               continue
            configFile = open(os.path.join(path,f), 'r')
            config = configFile.readlines()
            for line in config:
                if "//" in line:
                    continue
                if "QPATHTOF" in line:
                    line = line.replace("picture = ", "")
                    line = line.replace("textureVehicle = ", "")
                    line = line.replace("texture = ", "")
                    line = line.replace("icon = ", "")
                    line = line.replace("init = (_this select 0) setFlagTexture ", "")
                    line = line.replace(";", "")
                    line = line.lstrip(" ")
                    line = line.replace(")", "")

                    line = line.replace("QPATHTOF(", "{}\\".format(pboFrefixModPath,modPREFIX))
                    line = line.rstrip("\n")
                    if not line in usedTextureFiles:
                        usedTextureFiles.append(line)
                continue
    
    for used in usedTextureFiles:
        if used in allTextures:
            allTextures.remove(used)
        
    printMdDocument(allTextures)

if __name__ == "__main__":
    sys.exit(main())