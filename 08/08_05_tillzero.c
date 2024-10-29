//
//  08_05_tillzero.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, zandaka;
    zandaka = 1000;
    x = 1;
    
    while (zandaka>0) {
        printf("x? ");
        scanf("%d", x);
        zandaka -= x;
        printf("残高: %d\n", zandaka);
    }
    printf("end\n");
    return 0;
}
