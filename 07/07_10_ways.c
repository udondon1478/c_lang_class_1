//
//  07_10_ways.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n, x, j, k;
    int sum;
    sum = 0;
    scanf("%d %d", &n, &x);
    for (int i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            for (k=1; k<=n; k++) {
                if (i+j+k==x){
                    printf("%d %d %d\n", i, j, k);
                    sum ++;
            }
    }
}
}
    printf("組み合わせの数は%dです", sum);
}
