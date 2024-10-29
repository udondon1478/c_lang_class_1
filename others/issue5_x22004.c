#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0, price, sale;
    double dx;

    scanf("%d %d", &price, &sale);
    sale = 100 - sale;
    dx = sale * 0.01;

    while (price >= 0)
    {
        price *= dx;
        i++;
        if (price <= 0)
        {
            break;
        }
    }

    printf("%d\n", i);
    return 0;
}