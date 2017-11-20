#include <iostream>
#include <vector>

#include <model/entity/GameObject.h>
#include <model/entity/Block.h>

int main() {
    std::vector<std::unique_ptr<GameObject>> gameVec;

    gameVec.push_back(std::unique_ptr<GameObject>(new Block(1, 5, 5)));

    GameObject* obj = gameVec.at(0).get();

    std::cout << "before deleting element" << std::endl;

    gameVec.pop_back();

    std::cout << "after deleting element" << std::endl;


    return 0;
}