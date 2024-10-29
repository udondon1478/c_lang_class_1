//
//  06_08_loopNum2.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, sum, n;
    sum = 0;
    printf("n? ");
    scanf("%d", &n);
    for (i=0; i<=n; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
