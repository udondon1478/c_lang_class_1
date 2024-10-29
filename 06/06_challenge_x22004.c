//
//  06_challenge_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, sum, n, score, c, p, sumc;
    double nx, gpa;
    sum = 0;
    sumc = 0;
    printf("科目数? ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf("科目%dの点数？", i);
        scanf("%d", &score);
        if (score>=90 && score<=100) {
            p = 4;
        } else if(score>=80 && score<90){
            p = 3;
        } else if(score>=70 && score<80){
            p = 2;
        } else if(score>=60 && score<70){
            p = 1;
        } else{
            p = 0;
        }
        printf("科目%dの単位数？", i);
        scanf("%d", &c);
        sum = sum + c;
        sumc = sumc + (p * c);
    }
    nx = sumc;
    gpa = nx / sum;
    printf("%f", gpa);
    return 0;
}
