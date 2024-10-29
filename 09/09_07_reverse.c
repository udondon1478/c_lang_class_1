//
//  09_07_reverse.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a[5], i;
    //入力
    for (i=0; i<5; i++){
        printf("input %d: ", i);
        scanf("%d", &a[i]);
    }
    //印字
    for (i=4; i>=0; i--) {
        printf("%d: %d\n", i, a[i]);
    }
    return 0;
}
