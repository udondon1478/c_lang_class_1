//
//  08_02_whileLoop.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n, i;
    
    printf("n? ");
    scanf("%d", &n);
    
    while (n>=0) {
        printf("%d\n", n);
        n--;        //条件式判定を変化させる
    }
    return 0;
}
