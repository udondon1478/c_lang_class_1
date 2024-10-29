#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);

    if (x%2==0 && x%3==0)
    {
        printf("2および3の倍数です");
    } else if (x%3==0)
    {
        printf("3の倍数です");
    } else if (x%2==0)
    {
        printf("2の倍数です");
    } else {
        printf("2および3の倍数ではありません");
    }
    return 0;
}
