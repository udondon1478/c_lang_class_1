//
//  05_03_problem_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a==b) {
        printf("same\n");
    }else if (a>b) {
        printf("%d\n", a-b);
    }else if(b>a){
        printf("%d\n", b-a);
    }
    return 0;
}
