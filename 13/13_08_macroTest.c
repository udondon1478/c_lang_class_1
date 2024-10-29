#include <stdio.h>
#define XNUM (10) //マクロ（スペースを忘れない）
void calcSum(void){
    int i, sum=0; //変数の宣言
    
    for (i=1; i<=XNUM; i++) {   //1からXNUMまで
    sum += i; //加算
    }
    return sum;
}
int main(int argc, const char * argv[])
{
    printf("総和 = %d\n", calcSum); //出力
    return 0;
}