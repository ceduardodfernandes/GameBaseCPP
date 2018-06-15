#ifndef ESO_ENGINE_MODEL_INPUTMODEL_H_
#define ESO_ENGINE_MODEL_INPUTMODEL_H_

#include <SDL2/SDL.h>

#include "config/startup.h"

namespace esotericengine {

namespace input {

    struct InputConstant {
        unsigned int byte_code;
        unsigned int mapping_index;
    };

    const InputConstant kFaceUp =         {0b10000000000000000000000000000000, 0};
    const InputConstant kFaceRight =      {0b01000000000000000000000000000000, 1};
    const InputConstant kFaceBottom =     {0b00100000000000000000000000000000, 2};
    const InputConstant kFaceLeft =       {0b00010000000000000000000000000000, 3};
    const InputConstant kDirectionUp =    {0b00001000000000000000000000000000, 4};
    const InputConstant kDirectionRight = {0b00000100000000000000000000000000, 5};
    const InputConstant kDirectionDown =  {0b00000010000000000000000000000000, 6};
    const InputConstant kDirectionLeft =  {0b00000001000000000000000000000000, 7};
    const InputConstant kShoulderRight =  {0b00000000100000000000000000000000, 8};
    const InputConstant kShoulderLeft =   {0b00000000010000000000000000000000, 9};
    const InputConstant kTriggerRight =   {0b00000000001000000000000000000000, 10};
    const InputConstant kTriggerLeft =    {0b00000000000100000000000000000000, 11};
    const InputConstant kThrustRight =    {0b00000000000010000000000000000000, 12};
    const InputConstant kThrustLeft =     {0b00000000000001000000000000000000, 13};
    const InputConstant kFrontRight =     {0b00000000000000100000000000000000, 14};
    const InputConstant kFrontLeft =      {0b00000000000000010000000000000000, 15};
    const InputConstant kAux1 =           {0b00000000000000001000000000000000, 16};
    const InputConstant kAux2 =           {0b00000000000000000100000000000000, 17};
    const InputConstant kAux3 =           {0b00000000000000000010000000000000, 18};
    const InputConstant kAux4 =           {0b00000000000000000001000000000000, 19};
    const InputConstant kAux5 =           {0b00000000000000000000100000000000, 20};
    const InputConstant kAux6 =           {0b00000000000000000000010000000000, 21};
    const InputConstant kAux7 =           {0b00000000000000000000001000000000, 22};
    const InputConstant kAux8 =           {0b00000000000000000000000100000000, 23};
}

struct InputModel {


    int state;

    void Update(const SDL_Keycode& keycode);
};

}

#endif /* ESO_ENGINE_MODEL_INPUTMODEL_H_ */