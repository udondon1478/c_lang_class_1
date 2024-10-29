//
//  04_01_calc.c
//  prg202X
//
//  Created by x22004xx on 2022/05/11.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, c, d, e;
    a = 3;
    b = 4;
    c = 2;
    d = 8;
    e = a + b * c / d;
    printf("%d + %d * %d /%d = %d\n", a, b, c, d, e);
    return 0;
}
