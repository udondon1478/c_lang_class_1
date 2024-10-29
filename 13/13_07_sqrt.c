#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x;
    printf("input: \n");
    scanf("%lf", &x);
    
    printf("√%f = %f\n", x, sqrt(x)); //出力
    return 0;
}
