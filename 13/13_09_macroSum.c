#include <stdio.h>
#define XMIN (5)
#define XMAX (15)

void calcOf(void){
    int i, sum = 0; //変数の宣言
    
    for (i=XMIN; i<=XMAX; i++) {   //1からXNUMまで
    sum += i; //加算
    }
    return sum;
}

int main(int argc, char const * argv[])
{
    printf("総和 = %d\n", sumOf());
    return 0;
}
