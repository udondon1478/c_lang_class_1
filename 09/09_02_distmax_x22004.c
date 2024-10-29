//
//  09_02_distmax_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n, hist[3]={0, 0, 0}, i, p,;

    scanf("%d", &n);
    
    for (i=0; i<n; i++){
        scanf("%d", &p);
        hist[p-1]++;
    }
    //澤野先生にここより後のヒントをもらいました、
    int max=-1;
    for (i=0; i<3; i++) {
        if (max<hist[i]){
            max = hist[i];
            printf("%d: %d", i+1, max);
        }
    }
    for (i=0; i<3; i++) {
        if (max==hist[i]) {
            printf("%d: %d", i+1, max);
        }
    }
}
