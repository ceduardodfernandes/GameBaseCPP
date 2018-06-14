#ifndef ESO_ENGINE_CONFIG_STARTUP_H_
#define ESO_ENGINE_CONFIG_STARTUP_H_

#include <SDL2/SDL.h>

namespace esotericengine {

struct DataProps {
    unsigned int data_item_length;
    unsigned int num_unique_id_digits;
    unsigned int num_entity_type_digits;
    unsigned int num_location_digits;
};

struct InputMapping {
    SDL_Keycode face_up;   
    SDL_Keycode face_right;   
    SDL_Keycode face_bottom;  
    SDL_Keycode face_left;   

    SDL_Keycode direction_up;
    SDL_Keycode direction_right;
    SDL_Keycode direction_down;
    SDL_Keycode direction_left;

    SDL_Keycode shoulder_right;
    SDL_Keycode shoulder_left;

    SDL_Keycode trigger_right;
    SDL_Keycode trigger_left; 

    SDL_Keycode thrust_right; 
    SDL_Keycode thrust_left;  

    SDL_Keycode front_right;
    SDL_Keycode front_left;

    SDL_Keycode aux_1;
    SDL_Keycode aux_2;
    SDL_Keycode aux_3;
    SDL_Keycode aux_4;
    SDL_Keycode aux_5;
    SDL_Keycode aux_6;
    SDL_Keycode aux_7;
    SDL_Keycode aux_8;
};

}

#endif /* ESO_ENGINE_CONFIG_STARTUP_H_ */