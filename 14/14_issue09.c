#include <stdio.h>

int Calcx (int x) {
    int fx;
    fx = 2 * x + 1;
    return fx;
}

int main(int argc, const char *argv[])
{
    int i, n;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("f(%d)=%d\n", i, Calcx(i));
    }
    
    return 0;
}
