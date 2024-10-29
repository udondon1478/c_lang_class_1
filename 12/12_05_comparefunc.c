#include <stdio.h>

int maxof(int x, int y)
{
    int m;
    if (x>y) {      //引数の大きさを比較
    m = x;
    } else {
    m = y;
    }
    return m;       //大きい方の値を返却
}
int main(int argc, const char * argv[]){
    int a, b, max; //大きい方の値を格納する変数max

    printf("a b? ");
    scanf("%d %d", &a, &b);

    max = maxof(a, b); //関数呼び出し
    printf("大きい方の値は %dです。\n", max);
    return 0;
}