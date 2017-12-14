//
// Created by Russell Templet on 12/11/17.
//

#ifndef GAMEBASECPP_GRID_H
#define GAMEBASECPP_GRID_H

#include <vector>

class StringGrid {
private:
    int width;
    int height;

    std::vector<std::string> grid;

public:
    StringGrid(int _width, int _height);

    int getWidth() const;

    int getHeight() const;

    void appendData(const std::string &data);

    void appendDataRV(std::string &&data);

    //returns const reference
    const std::string& operator[] (int index) const;

    const std::string& operator() (int index_x, int index_y) const;

    //returns modifiable reference
    std::string& modify (int index) const;

    std::string& modify (int index_x, int index_y) const;



};


#endif //GAMEBASECPP_GRID_H
