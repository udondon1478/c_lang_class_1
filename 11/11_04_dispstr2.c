//
//  11_04_dispstr2.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i;
    char array[11]; //10文字 + \0
    printf("入力(10文字以内) : ")
    scanf("%s", array); //入力
    //一文字ずつ印字
    for (i=0; array[i]!='\0'; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
