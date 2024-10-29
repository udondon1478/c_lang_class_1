#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i, j, n, blank;
    scanf("%d", &n);
    blank = n - 2;

    for (i = 1; i <= n / 2; i++) //上半分の印字
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = 0; j < blank; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        blank -= 2;
    }

    for (i = 0; i < n; i++) //真ん中の印字å
    {
        printf("*");
    }
    printf("\n");

    blank = 1;                  //下半分の1行目の空白のための代入
    for (i = n / 2; i > 0; i--) //下半分の印字
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = 0; j < blank; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        blank += 2;
    }
    return 0;
}
