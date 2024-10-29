//
//  04_challenge2_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/17.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int sum, asi, turu, kame;
    
    printf("鶴と亀の合計は？ ");
    scanf("%d", &sum);
    printf("足の本数は? ");
    scanf("%d", &asi);
    
    kame = (asi - sum * 2)/2;
    turu = sum - kame;
    
    printf("鶴は%d羽、亀は%d匹です。\n", turu, kame);
    return 0;
} //x22037 纐纈龍之助に協力してもらいました。
