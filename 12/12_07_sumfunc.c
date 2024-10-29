#include <stdio.h>

int sumf(int n)
{
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int main(int argc, const char * argv[])
{
    int n = 0 , sum = 0;
    printf("n? ");
    scanf("%d", &n);

    sum = sumf(n);
    printf("1から%dまでの和は %dです\n", n, sum);
    return 0;
}