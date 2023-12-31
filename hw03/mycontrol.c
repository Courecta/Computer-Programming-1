#include "mycontrol.h"

static int16_t initial = 0;
double x, y, a, length, x;
double xCurrent, yCurrent, aCurrent;

void initialize( double x, double y, double a){
    initial += 1;
    if (abs(x) < 0.000001) {
    x = 0;
    }
    xCurrent = x;
    yCurrent = y;
    aCurrent = a;
}

int32_t forward( double length ){
    if (initial < 1){
        return -1;
    } else {
    xCurrent = (length * cos(aCurrent)) + xCurrent;
    yCurrent = (length * sin(aCurrent)) + yCurrent;
    return 0;
    }
}

int32_t clock_turn( double x ){
    if (initial < 1){
        return -1;
    } else {
    aCurrent = aCurrent - x;
    if (aCurrent < 0){
        aCurrent = aCurrent + (2 * M_PI);
        }
    }
    return 0;
}

int32_t counterclock_turn( double x ){
    if (initial < 1){
        return -1;
    } else {
    aCurrent = aCurrent + x;
    if (aCurrent > (2 * M_PI)){
        aCurrent = aCurrent - (2 * M_PI);
        }
    }
    return 0;
}

int32_t print(){
    if (initial < 1){
        return -1;
    } else {
    printf("position: (%.2lf,%.2lf), angle: %.2lf\n", xCurrent, yCurrent, aCurrent / M_PI);
    }
    return 0;
}