//
//  10_06_arraythreshold.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, height[5];
    for (i=0; i<5; i++) {
        scanf("%d", &height[i]);
    }
    for (i=0; i<5; i++) {
        if (height[i]>170) {
            printf("%d\n", height[i]);
        }
    }
    return 0;
}
