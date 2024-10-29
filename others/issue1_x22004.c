#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a1, b1, a2, b2, sum1, sum2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    sum1 = a1 + b1;
    sum2 = a2 + b2;
    
    if (sum1 <= sum2)
    {
        printf("%d", sum1);
    }
    else
    {
        printf("%d", sum2);
    }
    return 0;
}
