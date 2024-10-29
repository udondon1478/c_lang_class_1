//
//  07_04_swap.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, y, z;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    if (x<y && y<z) {
        printf("%d %d %d\n", x, y, z);
    }else if (y<x &&x<z){
        printf("%d %d %d\n", y, x, z);
    }else if (z<x &&x<y){
        printf("%d %d %d\n", z, x, y);
    }else if (x<z &&z<y){
        printf("%d %d %d\n", x, z, y);
    }else if (y<z &&z<x){
        printf("%d %d %d\n", y, z, x);
    }else{
        printf("%d %d %d\n", z, y, x);
    }
    return 0;
}

int x, y, z, temp;

printf("input: ");
scanf("%d %d %d", &x, &y, &z); //入力

if (x > y){
    temp = x;
    x = y;
    y = temp;
}
if (y > z){
    temp = y;
    y = z;
    z = temp;
}

if (x > y){
    temp = x;
    x = y;
    y = temp;
}
printf("%d %d %d\n", x, y, z);
