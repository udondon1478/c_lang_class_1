//
//  05_03_ifelse.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ( a>=b ) {
        printf("aはb以上です\n");
    } else {
        printf("aはb未満です\n");
    }
    return 0;
}
