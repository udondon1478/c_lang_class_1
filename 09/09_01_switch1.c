//
//  09_01_switch1.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    printf("n? ");
    scanf("%d", &n); //入力
    
    switch(n) {
        case 1:
            printf("AAA\n");
            //break;
        case 2:
            printf("BBB\n");
            break;
        case 3:
            printf("Defaultです\n");
            break;
    }
    return 0;
}
