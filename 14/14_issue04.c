#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, i, sum=0;
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    printf("%d", sum);
    return 0;
}
