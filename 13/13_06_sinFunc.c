#include <stdio.h>
#include <math.h> //算術関数用
//度からラジアンに変換
double deg2Rad(double deg) {
    rad = deg / 180.0 * M_PI;
}

int main(int argc, const char * argv[]){
    double deg, rad;
    printf("input: \n");
    scanf("%lf", &deg);
    deg2Rad(deg);
    printf("sin (%f) = %f\n", deg, sin(rad));
    return 0;
