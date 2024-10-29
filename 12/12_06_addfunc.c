#include <stdio.h>

int add(int x, int y)
{
    int s;
    s = x + y;      //引数の大きさを比較
    return s;       //大きい方の値を返却
}
int main(int argc, const char * argv[])
{
    int a, b, sum;

    printf("a b? ");
    scanf("%d %d", &a, &b);

    sum = add(a, b);
    printf("和は %dです\n", sum);
    return 0;
}