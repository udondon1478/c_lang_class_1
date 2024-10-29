//
//  08_01_rectangle.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int h, w;
    
    printf("h w? ");
    scanf("%d %d", &h, &w);
    
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++){
            putchar('#');
        }
        printf("\n");
    }
    return 0;
}
