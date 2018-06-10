#include <SDL.h>

void TestSDL() {
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

    if (window == NULL) {
        std::cout << "window could not be created: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    SDL_Event e;
    bool quit = false;
    while (!quit){
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN) {
                
            }
        }
        SDL_Delay(16);
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
}