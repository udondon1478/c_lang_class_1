//
//  05_02_problem_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = b*b-4*a*c;
    if(d>0){
        printf("TDR\n");
    }else if(d==0){
        printf("Double\n");
    }else if(d<0){
        printf("None\n");
    }
    return 0;
}
