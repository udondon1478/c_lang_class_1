//
//  main.c
//  13_02_sub
//
//  Created by x22004xx on 2022/07/13.
//

#include <stdio.h>
/*
int subof (int c, int d) { //関数宣言
    return (c-d); //結果を返す
}
*/
void subof (int c, int d) { //関数宣言
    printf("%d - %d = %d\n", c, d, c-d); //出力
}
int main(int argc, const char * argv[]) {
    int a=5, b=10; //宣言
    //printf("%d - %d = %d\n", a, b, subof(a, b)); //出力
    subof(a, b); //呼び出しのみ
    return 0;
}
