//
//  07_06_countdown.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n, i;
    printf("n? ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("%d\n", n-i);
    }
}
