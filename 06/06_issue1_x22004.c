//
//  06_issue1_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, sum, n, h;
    double nx;
    sum = 0;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        scanf("%d", &h);
        sum = sum + h;
    }
    nx = sum;
    printf("%f\n", nx/n);
    return 0;
}
