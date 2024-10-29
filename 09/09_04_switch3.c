//
//  09_04_switch3.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    double x;
    int m;
    printf("実数を入力してください. ");
    scanf("%lf", &x);
    printf("--- メニュー ---\n");
    printf("1: sin(x), 2: cos(x), 3 tan(x)\n");
    printf("input m: ");
    scanf("%d", &m);
    
    switch(m){
        case 1:
            printf("sin(%f) = %f\n", x, sin(x));
            break;
        case 2:
            printf("cos(%f) = %f\n", x, cos(x));
            break;
        case 3:
            printf("tan(%f) = %f\n", x, tan(x));
            break;
            
        default:
            printf("1~2までの値が入力されませんでした. \n");
    }
    return 0;
}
