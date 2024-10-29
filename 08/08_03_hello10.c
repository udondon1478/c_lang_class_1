//
//  08_03_hello10.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;      //カウンタ変数
    
    i=1;        //初期設定
    
    while (i<=10) {
        printf("Hello, World!\n");
        i++;        //終わらせる条件を満たすためにインクリメント
    }
    return 0;
}
