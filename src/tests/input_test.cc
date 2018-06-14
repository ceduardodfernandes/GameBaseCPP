#include "tests/input_test.h"

#include <iostream>
#include <SDL2/SDL.h>

#include "model/input_model.h"

namespace esotericenginetest {

int TestInputModel() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "There was an error" << std::endl;
    } else {
        std::cout << "Success!" << std::endl;
    }

    SDL_Event e;
    bool quit = false;

    while (!quit) {

        while(SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
        SDL_Delay(16);
    }
    SDL_Quit();

    return 0;
}

}