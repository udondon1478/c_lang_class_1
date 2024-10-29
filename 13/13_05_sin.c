#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){
    double deg, rad;
    printf("input: \n");
    scanf("%lf", &deg);
    rad = deg / 180.0 * M_PI;
    printf("sin (%f) = %f\n", deg, sin(rad));
    return 0;
}