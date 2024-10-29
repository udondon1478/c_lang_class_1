//
//  05_05_compare.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    scanf("%d, %d", &a, &b);
    if(a<b){
        printf("a < b\n");
    }else if(a<b){
        printf("a > b\n");
    }else{
        printf("a == b\n");
    }
    return 0;
}
