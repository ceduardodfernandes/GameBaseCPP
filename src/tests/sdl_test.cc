#include "tests/sdl_test.h"

namespace esotericenginetest {

int TestSdl() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "There was an error" << std::endl;
    } else {
        std::cout << "Success!" << std::endl;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Hello there!",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        500,
        500,
        SDL_WINDOW_RESIZABLE
    );

    SDL_SetWindowMinimumSize(window, 500, 500);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_RenderSetLogicalSize(renderer, 1920, 1080);

    SDL_Rect rect = {0, 0, 1920, 1080};

    SDL_

    if (window == NULL) {
        std::cout << "window could not be created: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    SDL_Event e;
    bool quit = false;
    long counter = 0;
    while (!quit){
        std::cout << "rendering" << counter++ << std::endl;

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);
        
        // SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
        // SDL_RenderDrawRect(renderer, &rect);



        SDL_RenderPresent(renderer);


        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN) {
                
            }
        }
        SDL_Delay(16);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

}