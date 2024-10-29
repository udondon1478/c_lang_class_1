#include <stdio.h>
int main(int argc, const char *argv[])
{
    double height[5];
    double sum = 0.0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &height[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += height[i];
    }
    printf("%f", sum/5);
    return 0;
}
