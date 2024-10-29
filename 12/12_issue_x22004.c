#include <stdio.h>

int factfunc(int n)
{
    int s = n;
    n--;
    for (int i = 0; n >= 1; n--)
    {
        s *= n;
    }
    return s;
}
int main(int argc, const char * argv[])
{
    int n = 0 , sum = 0;
    printf("n? ");
    scanf("%d", &n);

    sum = factfunc(n);
    printf("%dの階乗は %dです\n", n, sum);
    return 0;
}