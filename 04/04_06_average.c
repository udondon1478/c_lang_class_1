//
//  04_06_average.c
//  prg202X
//
//  Created by x22004xx on 2022/05/11.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int h1, h2, h3;
    double d1, d2, d3;
    
    printf("No.1? ");
    scanf("%d",&h1);
    printf("No.2? ");
    scanf("%d", &h2);
    printf("No.3? ");
    scanf("%d", &h3);
    
    d1 = h1;
    d2 = h2;
    d3 = h3;
    
    printf("average = %f\n", (d1+d2+d3)/3.0);
}
