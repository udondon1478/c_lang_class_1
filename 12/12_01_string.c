//
//  12_01_string.c
//  prg202X
//
//  Created by x22004xx on 2022/07/06.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int [11];
    printf("入力(10文字以内) : ");
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++){
        printf("%s", str[i][0], str[i][1]);
    }
    printf("\n");
    return 0;
}
