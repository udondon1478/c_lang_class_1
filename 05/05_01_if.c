//
//  05_01_if.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d" &b);
    if(a==b) {
        printf("aとbの値が等しいです\n");
    }
    printf("終了です\n");
    return 0;
}
