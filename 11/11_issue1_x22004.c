//
//  11_issue1_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, sum=0, n=10;
    char array[11];
    
    printf("input(10文字以下): ");
    scanf("%s", array);
    
    for (i=0; array[i]!='\0'; i++) {
        if (array[i]=='(') {
            sum++;
        }else if(array[i]==')'){
            sum--;
        }
        if (sum<0) {
            printf("NG\n");
            return 0;
        }
    }
    if (sum==0) {
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}
