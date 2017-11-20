//
// Created by Russell Templet on 11/19/17.
//

#include <util/file/GameDataReader.h>

GameDataReader::GameDataReader(std::string _fileName, int _gameGridWidth, int _gameGridHeight, AreaBlock (*_generateAreaBlock)(char *)) :
        fileName(_fileName), gameGridWidth(_gameGridWidth), gameGridHeight(_gameGridHeight), generateAreaBlock(_generateAreaBlock) { }

char* GameDataReader::readFile() {
    char* memBlock = nullptr;
    std::ifstream reader(fileName, std::ios::in|std::ios::binary|std::ios::ate);
    if (reader.is_open()) {
        long size = reader.tellg();
        memBlock = new char[size];

        reader.seekg(0, std::ios::beg);
        reader.read(memBlock, size);
        reader.close();
    }
    return memBlock;
}

std::vector<AreaBlock> GameDataReader::createGameGrid() {
    std::vector<AreaBlock> areaBlockVec;
    char* memBlock = readFile();
    char delimiter[] = "|";
    char* areaStr = strtok(memBlock, delimiter);

    while (areaStr != nullptr) {
        AreaBlock areaBlock = (*generateAreaBlock)(areaStr);
        areaBlockVec.push_back(areaBlock);
        areaStr = strtok(nullptr, delimiter);   //somehow this takes the next area chunk...
    }
    delete[] memBlock;
    return areaBlockVec;
}

