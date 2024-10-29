//
//  07_07_biggest.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int max, n, i;
    max = 0;
    for (i=1; i<=5; i++) {
        printf("%d? ", i);
        scanf("%d", &n);
        if (max<n) {
            max = n;
        }
    }
    printf("max = %d\n", max);
    return 0;
}
