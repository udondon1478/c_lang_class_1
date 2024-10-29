//
//  04_issue1_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/05/11.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int hi, wi;
    double dhi, dwi;
    
    printf("身長は? \n");
    scanf("%d", &hi);
    printf("体重は? \n");
    scanf("%d", &wi);
    dhi = hi;
    dwi = wi;
    printf("標準体重との差は%fです\n", dwi-(dhi-100)*0.9);
    printf("BMIは%fです\n", dwi/((dhi/100)*(dhi/100)));
    return 0;
}
