//
// Created by Russell Templet on 11/19/17.
//

#include <util/data/DataGridBuilder.h>

DataGridBuilder::DataGridBuilder(std::string _fileName, int _dataGridWidth, int _dataGridHeight) :
        dataGrid(_dataGridWidth, _dataGridHeight), fileName(_fileName) { }

char* DataGridBuilder::readFile() {
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

void DataGridBuilder::build() {
    char* memBlock = readFile();
    char delimiter[] = "|";
    char* areaStr = strtok(memBlock, delimiter);

    while (areaStr != nullptr) {
        if (dataGrid.appendData(areaStr)) {
            areaStr = strtok(nullptr, delimiter);   //somehow this takes the next area chunk...
        } else {
            break;
        }
    }
    dataGrid.resetIndex();
    delete[] memBlock;
}
