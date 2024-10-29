//
//  09_03_switch2.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char ch;
    
    printf("text? ");
    while ((ch = getchar()) != '\n') {      //一文字が改行\になるまで
        switch(ch){
                case ' '        //space
                putchar('\n');
                break;
            default:        //other
                putchar(ch);
                break;
        }
    }
    printf("\n");
    return 0;
}
