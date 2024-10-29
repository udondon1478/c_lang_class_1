#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    double da, db, dc;

    scanf("%d %d %d", &a, &b, &c);
    
    da = a;
    db = b;
    dc = c;

    printf("%f", (da+db+dc)/3);
    return 0;
}
