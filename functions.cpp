#include <stdlib.h>
#include "functions.hpp"

template <typename T>
T randomNumber (T min, T max){
    return rand() % (max - min + 1) + min;
};
