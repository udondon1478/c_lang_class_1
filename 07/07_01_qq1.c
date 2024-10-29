//
//  07_01_qq1.c
//  prg202X
//
//  Created by x22004xx on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, j;
    for (i=1; i<10; i++) {
        for (j=1; j<10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}
