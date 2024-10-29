//
//  05_issue1_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b)
        if (b<c) {
        printf("Yes\n");
        } else {
        printf("No\n");
    }else{
        printf("No\n");
    }
    return 0;
}
