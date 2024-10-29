//
//  08_04_calcWhile.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, sum;
    sum = 0;
    x = 1;      //最初だけ0以外の値にしておく
    
    while (x!=0) {      //0が入力されるまでループ
        printf("x? ");
        scanf("%d", &x);
        sum=sum+x;
        //sum += xでもいける
        printf("sum: %d\n", sum);
    }
    printf("end\n");
    return 0;
}
