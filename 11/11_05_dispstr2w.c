//
//  11_05_dispstr2w.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i=0;    //予め0にしておく
    char array[11]; //10文字 + \0
    printf("入力(10文字以内) : ")
    scanf("%s", array); //入力
    //一文字ずつ印字
    while (array[i]!='\0') {
        putchar(array[i]);
        i++;        //ループ内で条件更新
    }
    putchar('\n');
    return 0;
}
