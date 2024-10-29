//
//  04_challenge1_test.c
//  prg202X
//
//  Created by x22004xx on 2022/05/16.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, a, b, c ,d;
    
    printf("x? ");
    scanf("%d", &x);
    b = (x/100)%10;
    c = (x/10)%10;
    d = x%10;
    
    printf("%d%d%d\n", d, c, b);
    return 0;
} //x22041＿近藤秀祐と相談しながらやりました
