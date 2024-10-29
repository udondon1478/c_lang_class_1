#include <stdio.h>
int getCombination(int n, int r)
{
    int x = 1, y = 1, z = 1, C;
    for (int i = 1; i <= n; i++)
    {
        x *= i; // nの階上
    }
    for (int i = 1; i <= r; i++)
    {
        y *= i; // rの階上
    }
    for (int i = 1; i <= n - r; i++)
    {
        z *= i; //(n-r)の階上
    }
    C = x / (y * z);
    return C;
}

int main(int argc, const char *argv[])
{
    int n, r;
    scanf("%d", &n);

    for (r = 0; r <= n; r++)
    {
        if (r == 0)
        {
            printf("a^%d + ", n);
        }
        else if (r == n)
        {
            printf("b^%d", n);
        }
        else
        {
            printf("(%d * a^%d * b^%d) + ", getCombination(n, r), n - r, r);
        }
    }
    printf("\n");
    return 0;
}

// x22041 近藤秀祐君にgetCombination関数のあたりの考え方を教えました
//参考にしたサイト:https://rikeilabo.com/commentary-binomial-theorem