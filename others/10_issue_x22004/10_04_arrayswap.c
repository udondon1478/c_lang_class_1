//
//  10_04_arrayswap.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[5]={1,2,3,4,5}, tmp, x, y, i;
    scanf("%d %d", &x, &y);
    if (x<1 || x>5) {
        printf("番号が正しくありません");
    }else if(y<1 || y>5){
        printf("番号が正しくありません");
    }else{
        tmp=a[x-1];
        a[x-1]=a[y-1];
        a[y-1]=tmp;
        for (i=0; i<5; i++) {
            printf("a[%d]=%d\n", i, a[i]);
        }
    }
    return 0;
}
