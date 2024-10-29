#include <stdio.h>
int main(int argc, char const *argv[])
{
    int bank=1000, x;
    while (bank > 0)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            bank -= x;
            printf("%d\n", bank);
        }else if (x==0)
        {
            printf("取引終了");
            break;
        }
    }
    return 0;
}
