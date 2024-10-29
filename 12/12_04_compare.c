#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;

    printf("a b? ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("大きい方の値は %dです\n", a);
    }else{
        printf("大きい方の値は %dです\n", b);
    }
    return 0;
}