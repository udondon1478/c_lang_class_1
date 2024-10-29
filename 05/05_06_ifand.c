//
//  05_06_ifand.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    scanf("%d, %d", &a ,&b);
    if (a>0 && b>0){
        printf("aとbは正です\n");
    }else{
        printf("aとbのどちらかは負もしくは0です\n");
    }
    return 0;
}
