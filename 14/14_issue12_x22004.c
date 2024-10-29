#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (abs(a-b) < c && c < a + b)
    {
        if (a==b || b==c || c==a)
        {
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
    return 0;
}