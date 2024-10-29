//
//  07_03_swap.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x<y) {
        printf("%d %d\n", x, y);
    }else{
        printf("%d %d\n", y, x);
    }
    return 0;
}
