//
//  09_01_dist_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n, hist[3]={0, 0, 0}, i, p;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
        scanf("%d", &p);
        hist[p-1]++;
    }
    for(i=0; i<3; i++){
        printf("%d: %d\n", i+1, hist[i]);
    }
    return 0;
}
//x22015 今泉くんに相談を受けて教えました。
//x22003　畦地くんに相談を受けて教えました。
