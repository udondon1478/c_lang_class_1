//
//  09_05_arraysum.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //宣言
    int a[10] = {11 , 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n=10; sum=0, i;
    //ループによる計算
    for (i=0; i<n; i++){
        sum += a[i];
    }
    printf("合計=%d\n", sum);
    
    return 0;
}
