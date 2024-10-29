//
//  12_03_heightWeight2.c
//  prg202X
//
//  Created by x22004xx on 2022/07/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int human[3][2], i, n = 1;
    
    for (i=0; i<3; i++) {
        printf("%d人目の身長と体重？ ", n);
        scanf("%d %d", &human[i][0], &human[i][1]);
    }
    n = 1;
    for (i = 0; i < 3; i++) {
        printf("%d人目の身長と体重は %d %d です\n", n, human[i][0], human[i][1]);
        n++;
    }
}
