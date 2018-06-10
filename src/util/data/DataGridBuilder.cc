//
// Created by Russell Templet on 11/19/17.
//

#include "util/data/DataGridBuilder.h"

DataGridBuilder::DataGridBuilder(std::string _fileName, int _dataGridWidth, int _dataGridHeight, const char* _delimiter) :
        dataGrid(_dataGridWidth, _dataGridHeight), fileName(std::move(_fileName)), delimiter(_delimiter) { }

char* DataGridBuilder::readFile() {
    char* memBlock = nullptr;
    std::ifstream reader(fileName, std::ios::in|std::ios::binary|std::ios::ate);
    if (reader.is_open()) { //TODO: figure out when ifstream isnt reading file...
        long size = reader.tellg();
        memBlock = new char[size];

        reader.seekg(0, std::ios::beg);
        reader.read(memBlock, size);
        reader.close();
    }
    return memBlock;
}

void DataGridBuilder::build() {
    char* memBlock = readFile();
    char* areaStr = strtok(memBlock, delimiter);

    while (areaStr != nullptr) {
        dataGrid.appendDataRV(std::string(areaStr));
        areaStr = strtok(nullptr, delimiter);   //somehow this takes the next area chunk...
    }
    delete[] memBlock;
}

const std::string &DataGridBuilder::getFileName() const {
    return fileName;
}

const char *DataGridBuilder::getDelimiter() const {
    return delimiter;
}

const Grid<std::string> &DataGridBuilder::getDataGrid() const {
    return dataGrid;
}
