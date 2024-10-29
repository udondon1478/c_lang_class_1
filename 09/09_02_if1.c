//
//  09_02_if1.c
//  prg202X
//
//  Created by x22004xx on 2022/06/15.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int n;
    printf("n? ");
    scanf("%d", &n);
    
    if (n==1) {
        printf("AAA\n");
    } else if(n==2){
        printf("BBB\n");
    }else if(n==3){
        printf("Defaultです.");
    }
    return 0;
}
