//
//  06_06_printscan.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, a;
    for (i=1; i<=5; i++) {
        printf("a? ");
        scanf("%d", &a);
        printf("%d: %d\n", i, a);
    }
    return 0;
}
