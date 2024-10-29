//
//  06_05_even2.c
//  prg202X
//
//  Created by x22004xx on 2022/05/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for (i=0; i<10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}
