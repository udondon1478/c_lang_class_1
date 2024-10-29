#include <stdio.h>
int main(int argc, const char *argv[])
{
    int house, h[101], chicken=0;
    scanf("%d", &house);
    for (int i = 0; i <= house; i++)
    {
        chicken += i * 2;
    }
    printf("%d", chicken);
    return 0;
}
