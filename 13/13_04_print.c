#include <stdio.h>
void printFunc(void) {
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}
int main(int argc, const char * argv[]){
    //関数呼び出し
    printFunc(); //引数がない呼び出し
    return 0;
}