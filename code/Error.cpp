#include<math.h>

float relative_error(float a, float x){
    return abs((a - x) / x);
};

float absolute_error(float a, float x){
    return abs(a - x);
};