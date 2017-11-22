class DataGrid {
private:
    char** dataArray;
    int gridWidth;
    int gridHeight;
    int currentIndex;

public:
    DataGrid(int _gridWidth, int _gridHeight);
    ~DataGrid();

    char **getDataArray() const {
        return dataArray;
    }

    int getGridWidth() const {
        return gridWidth;
    }

    int getGridHeight() const {
        return gridHeight;
    }


    int getCurrentIndex() const {
        return currentIndex;
    }

    bool appendData(char* data);

    void resetIndex();
};