//
//  10_07_arraycomplex.c
//  prg202X
//
//  Created by x22004xx on 2022/06/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, he[5], we[5];
    double bmi[5], nwe[5], dif[5];
    for (i=0; i<5; i++) {
        scanf("%d %d", &he[i], &we[i]);
        bmi[i]=we[i]/((he[i]/100.0)*(he[i]/100.0));
    }
    for (i=0; i<5; i++) {
        if (bmi[i]>23) {
            nwe[i]=(he[i]-100.0)*0.9;
            dif[i]=we[i]-nwe[i];
            printf("%f %f\n", bmi[i], dif[i]);
        }
    }
}
