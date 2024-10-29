//
//  10_05_arrayminmax.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, height[5], min, max;
    for (i=0; i<5; i++) {
        scanf("%d", &height[i]);
        max=min=height[0];
        }
    for (i=0; i<5; i++) {
        if (height[i]>max) {
            max=height[i];
        }else if(height[i]<min) {
            min=height[i];
        }
    }
    printf("%d\n%d\n", min, max);
    return 0;
}
