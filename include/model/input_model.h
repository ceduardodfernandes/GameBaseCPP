#ifndef ESO_ENGINE_MODEL_INPUTMODEL_H_
#define ESO_ENGINE_MODEL_INPUTMODEL_H_

namespace esotericengine {

namespace input {
    const int kFaceUp =         0b10000000000000000000000000000000;
    const int kFaceRight =      0b01000000000000000000000000000000;
    const int kFaceBottom =     0b00100000000000000000000000000000;
    const int kFaceLeft =       0b00010000000000000000000000000000;

    const int kDirectionUp =    0b00001000000000000000000000000000;
    const int kDirectionRight = 0b00000100000000000000000000000000;
    const int kDirectionDown =  0b00000010000000000000000000000000;
    const int kDirectionLeft =  0b00000001000000000000000000000000;

    const int kShoulderRight =  0b00000000100000000000000000000000;
    const int kShoulderLeft =   0b00000000010000000000000000000000;

    const int kTriggerRight =   0b00000000001000000000000000000000;
    const int kTriggerLeft =    0b00000000000100000000000000000000;

    const int kThrustRight =    0b00000000000010000000000000000000;
    const int kThrustLeft =     0b00000000000001000000000000000000;

    const int kFrontRight =     0b00000000000000100000000000000000;
    const int kFrontLeft =      0b00000000000000010000000000000000;

    const int kAux1 =           0b00000000000000001000000000000000;
    const int kAux2 =           0b00000000000000000100000000000000;
    const int kAux3 =           0b00000000000000000010000000000000;
    const int kAux4 =           0b00000000000000000001000000000000;
    const int kAux5 =           0b00000000000000000000100000000000;
    const int kAux6 =           0b00000000000000000000010000000000;
    const int kAux7 =           0b00000000000000000000001000000000;
    const int kAux8 =           0b00000000000000000000000100000000;
}

struct InputModel {


    int state;
};

}

#endif /* ESO_ENGINE_MODEL_INPUTMODEL_H_ */