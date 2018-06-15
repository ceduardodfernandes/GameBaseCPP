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

/**
 * InputMapping is currently just an array of SDL_Keycodes
 * By using the input model constants, we can figure out the index of the array, based on these settings
 * Value of this array is a SDL_Keycode, 
 * 
 */
struct InputMapping {
    SDL_Keycode input_map_array[32];
};

}

#endif /* ESO_ENGINE_CONFIG_STARTUP_H_ */