//
//  08_issue_x22004.c
//  prg202X
//
//  Created by x22004xx on 2022/06/08.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x, zandaka, saifu;
    x = 1;
    zandaka = 1000;
    saifu = 1000;
    
    while (zandaka>0 && saifu>0){  //残高がある間はループ
        scanf("%d", &x);
        if (x<0){
            zandaka -= x;
            saifu += x;
            printf("%d %d\n", zandaka, saifu);
            continue;
        }else if(x==0){
            printf("取引終了\n");
            break;
        }
        zandaka -= x;
        saifu += x;
        printf("%d %d\n", zandaka, saifu);
    }
    return 0;
}
