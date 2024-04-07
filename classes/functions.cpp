#include <stdlib.h>
#include "functions.hpp"

// Utilities functions
//

// Function: randomNumber
// Generates a random number between min and max
//
// T = template type
// @param T min = minimum number
// @param T max = maximum number
// @return T
template <typename T>
T randomNumber(T min, T max){
    return rand() % (max - min + 1) + min;
};
