//
//  11_07_countA.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, count=0;
    char array[11];
    printf("input (10文字以下): ");
    scanf("%s", array);
    for (i=0; array[i]!='\n'; i++) {
        if (array[i]=='a') {
            count++;
        }
    }
    printf("aの数は%dです\n", count);
    return 0;
}
