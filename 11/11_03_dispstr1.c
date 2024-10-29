//
//  11_03_dispstr1.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, n=5;
    char array[] = "abcde";
    printf("一文字づつ印字: ")
    for (int i=0; i<n; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
