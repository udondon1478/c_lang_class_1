#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, i=1, sum=0;
    scanf("%d", &n);

    while (n>0)
    {
        sum+=i;
        if (i==n)
        {
            break;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}    