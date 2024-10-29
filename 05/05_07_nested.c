//
//  05_07_nested.c
//  prg202X
//
//  Created by x22004xx on 2022/05/18.
//

#include <stdio.h>

/*## 入れ子構造
 
 ・制御構文の中に制御構文を挿入すること

  if文の中にif文を挿入すること

 ・例

 - a>0でかつb==0の時, 「A」と出力
 - a>0でかつb>0の時,「B」と出力
 - a>0で上記以外の時,「C」と出力
 - a>0以外の時,「D」と出力*/
int main(int argc, const char * argv[])
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>0){
        printf("A\n");
    }else if(b>0) {
        printf("B\n");
    }else{
        printf("C\n");
    }
}
