#include "tests/input_test.h"

#include <array>
#include <functional>
#include <iostream>
#include <vector>

#include "model/input_model.h"

#define INDEX_TYPE unsigned char
#define ARRAY_SIZE 219

namespace esotericenginetest {

struct KeyPair {
    INDEX_TYPE key_index; 
    unsigned int original_keycode;
};

void InitSdl(void);
void EventLoop(std::function<void(const SDL_Event&)>);

int TestInputModel() {
    InitSdl();

    //TODO: put captured init variables here

    std::function<void(const SDL_Event&)> on_keypress = [&](const SDL_Event& e) {

    };

    EventLoop(on_keypress);

    return 0;
}

int TestUniqueInputs() {
    InitSdl();

    std::array<unsigned char, ARRAY_SIZE> keycodes;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        keycodes[i] = (INDEX_TYPE) i;
    }
    int hello = 1;

    std::vector<KeyPair> key_history;
    key_history.reserve(100);

    std::function<void(const SDL_Event&)> on_keypress = [&](const SDL_Event& e) {
        unsigned int key = e.key.keysym.sym;
        INDEX_TYPE key_index = key % ARRAY_SIZE;
        hello = 4;

        for (int i = 0; i < key_history.size(); i++) {
            if (key_history[i].key_index == key_index) {
                std::cout << "Found match: index " << key_index << " matched with key " << key_history[i].original_keycode << ", for pressed key " << key << std::endl;
            }
        }
        key_history.push_back({key_index, key});
    };

    EventLoop(on_keypress);

    return 0;
}

//Helper functions
void InitSdl() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "There was an error" << std::endl;
    } else {
        std::cout << "Success!" << std::endl;
    }
}

void EventLoop(std::function<void(const SDL_Event&)> on_keypress) {
    SDL_Event e;
    bool quit = false;

    while (!quit) {

        while(SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    quit = true;
                    break;
                case SDL_KEYDOWN:
                    on_keypress(e);
                    break;
            }
        }
        SDL_Delay(16);
    }
    SDL_Quit();
}

}