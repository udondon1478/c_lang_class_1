//
//  08_07_tillzero3.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, zandaka;
    x = 1;
    zandaka = 1000
    
    while (zandaka>0){  //残高がある間はループ
        printf("x? ");
        scanf("%d", &x);
        if (x<0){
            printf("無効です\n");
            continue;
        }else if(x==0){
            printf("取引終了");
            break;
        }
        zandaka -= x;
        printf("残高: %d\n", zandaka);
    }
}
