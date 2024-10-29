//
//  06_02_sum10.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, sum; //変数の宣言
    sum = 0; //初期化
    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    printf("合計: %d\n", sum);
    
    return 0;
}
