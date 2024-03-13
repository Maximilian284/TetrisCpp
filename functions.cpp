#include <stdlib.h>
#include "functions.hpp"

using namespace std;

template <typename T>
T randomNumber (T min, T max){
    return rand() % (max - min + 1) + min;
}
