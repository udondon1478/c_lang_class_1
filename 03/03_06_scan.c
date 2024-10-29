//
//  03_06_scan.c
//  prg202X
//
//  Created by x22004xx on 2022/04/27.
//

#include <stdio.h>

int main(int arg, const char *argv[])
{
    double a; //実数型
    printf("a? ");
    scanf("%lf", &a); //実数の入力
    printf("a = %f\n", a); //実数の出力
    return 0;
}
