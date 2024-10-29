//
//  07_02_swap.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, y;
    int temp;
    
    printf("x? ");
    scanf("%d", &x);
    printf("y? ");
    scanf("%d", &y);
    
    temp = x; //xを一時保存
    x = y; //
    printf("%d %d\n", x, temp);
    return 0;
}
