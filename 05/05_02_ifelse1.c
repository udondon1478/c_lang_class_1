//
//  05_02_ifelse1.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a;
    scanf("%d", &a);
    if (a>=0) {
        printf("aは正の値もしくは0です\n");
    } else {
        printf("aは負の値です\n");
    }
    printf("計算終了\n");
}
