#include <string>
#include <fstream>
#include <vector>
#include <model/entity/GameObject.h>

using AreaBlock = std::vector<std::unique_ptr<GameObject>>;

class GameDataReader {
private:
    int gameGridWidth;
    int gameGridHeight;
    std::string fileName;
    AreaBlock (*generateAreaBlock)(char *); //function pointer

    char* readFile();

public:
    GameDataReader(std::string _fileName, int _gameGridWidth, int _gameGridHeight, AreaBlock (*generateAreaBlock)(char *));

    int getGameGridWidth() const {
        return gameGridWidth;
    }

    int getGameGridHeight() const {
        return gameGridHeight;
    }

    const std::string &getFileName() const {
        return fileName;
    }

    std::vector<AreaBlock> createGameGrid();
};