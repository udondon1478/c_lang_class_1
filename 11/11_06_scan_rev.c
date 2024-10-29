//
//  11_06_scan_rev.c
//  prg202X
//
//  Created by x22004xx on 2022/06/29.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i;
    
    char array[6];
    printf("input: ");
    scanf("%s", array);
    for (i=4; i>=0; i--) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
