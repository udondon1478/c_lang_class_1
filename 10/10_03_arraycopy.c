//
//  10_03_arraycopy.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, heightc[5], n=5;
    double heightm[5];
    for (i=0; i<n; i++) {
        scanf("%d", &heightc[i]);
    }
    for (i=0; i<n; i++) {
        heightm[i]=heightc[i]/100.0;
    }
    for (i=0; i<n; i++) {
        printf("%f\n", heightm[i]);
    }
    return 0;
}
