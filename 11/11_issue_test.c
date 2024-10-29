//
//  11_issue_test.c
//  prg202X
//
//  Created by x22004xx on 2022/07/05.
//

#include <stdio.h>
int main(void){
    char stack[11] = {'\0'}, s[11] = {'\0'};
    int counter = -1, i = 0;

    printf("入力しやがりなさい!! ");scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[counter] = s[i];
            i++
            counter++;
            //printf("%cをスタックしたよ\n", stack[counter]);
        }
    }
    
    counter = -1;
    
    for(i=1; s[i] ! = '\0'; i++){
        switch(stack[counter]){
            case '(':
                if(s[i] == ')')
                    counter--;
                break;
            case '[':
                if(s[i] == ']')
                    counter--;
                break;
            case '{':
                if(s[i] == '}')
                    counter--;
                break;
        }
    }

    if(counter == 0)
        printf("OK\n");
    else
        printf("NG\n");

    return 0;
