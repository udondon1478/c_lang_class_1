//
//  04_05_convert.c
//  prg202X
//
//  Created by x22004xx on 2022/05/11.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int nx, ny;
    double dx, dy;
    
    printf("nx ny? ");  //2整数入力
    scanf("%d %d", &nx, &nx);
    printf("nx/ny = %d\n", nx/ny); 
    dx = nx;        //整数を実数変数に代入
    dy = nx;
    printf("dx/ny = %f\n", dx/ny);
    printf("nx/dy = %f\n", nx/dy);
    return 0;
}
