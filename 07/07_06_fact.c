//
//  07_06_fact.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, n, i, xn;
    printf("x? n? ");
    scanf("%d %d", &x, &n);
    xn = 1;
    for (i=1; i<=n; i++) {
        xn = xn*x;
    }
    printf("%d ^ %d = %d\n", x, n, xn);
    return 0;
}
