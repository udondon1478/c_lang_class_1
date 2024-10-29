//
//  10_02_arrayinput.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int sum=0, i, n=5, height[i];
    double ave;
    for(i=0; i<n; i++){
        height[i] = i;
        scanf("%d", &height[i]);
    }
    for (i=0; i<n; i++) {
        sum += height[i];
    }
    ave=sum/5.0;
    printf("%f\n", ave);
    return 0;
}
