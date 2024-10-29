//
//  11_issue3_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    char stack[11] = {'\0'}, s[11] = {'\0'}; //push用の配列と、pop用の配列を用意する
    int counter = -1; //一つ後ろを参照するため-1

    printf("input(10文字以下): ");
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            counter++;
            stack[counter] = s[i];
        }

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

    if(counter == -1)
        printf("OK\n");
    else
        printf("NG\n");

    return 0;
}
//k22047　木村聡一朗さんに教えてもらいながらやりました。
