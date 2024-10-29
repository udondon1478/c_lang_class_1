//
//  04_04_roundoff.c
//  prg202X
//
//  Created by x22004xx on 2022/05/11.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int nx;
    double dx;
    printf("dx? ");
    scanf("%lf", &dx); //実数入力
    printf("dx/2 = %f\n", dx/2);
    nx = dx;           //実数を整数変数に代入
    printf("nx = %d\n", nx);
    printf("nx/2 = %d\n", nx/2);
    return 0;
}
