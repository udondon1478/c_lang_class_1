//
//  09_06_arrayloop.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //宣言
    int a[100];
    int n=100, i;
    
    for (i=0; i<n; i++){
        a[i]=i;
    }
        for (i=0; i<n; i++){
        printf("a[%d]: %d\n", i, a[i]);
    }
        return 0;
}

