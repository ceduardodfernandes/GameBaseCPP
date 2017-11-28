#include <iostream>
#include "tests/test_data_read.cpp"
#include "tests/test_write_data_example.cpp"

/**
 * This Fmain file is the main controller of the engine -- decides whether to run game, editor, or any custom tests.
 * Feel free to add more custom cases if more tests/modes are desired
 *
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char** argv) {

    if (argc == 0) {

        // run game normally
        std::cout << "I am just running the game now\n";
        return 0;

    } else if (argc == 1) {
        if (std::strcmp(argv[0], "-e") == 0) {

            // run editor
            std::cout << "Editor time\n";

        } else if (std::strcmp(argv[0], "-1") == 0) {

            // run test_write_data_example.cpp
            return test_data_read::run1();

        } else if (std::strcmp(argv[0], "-2") == 0) {

            // run test_data_read.cpp
            return test_data_write_example::run2();

        }
    } else {
        std::cout << "Only 0 or 1 argument is valid.\nPossible arguments:\n`-e` : Editor Mode\n`-1` : TEST - Write arbitrary sample data\n`-2` : TEST - Read sample output file\n";
    }

    return 1;
}