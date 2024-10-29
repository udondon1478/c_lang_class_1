//
//  10_01_arraysum.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
int i, n=5, a[5], sum=0; //宣言
for(i=0; i<n; i++){ //配列要素分のループ
    a[i] = i; //カウンタ変数で値の挿入
}
    for(i=0; i<n; i++){
    sum += a[i];
}
    printf("合計=%d\n", sum);
    return 0;
}
