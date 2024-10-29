#include <stdio.h>
int main(int argc, const char *argv[])
{
    char x;
    scanf("%c", &x);

    switch (x)
    {
    case 'L':
        printf("Left\n");
        break;
    case 'R':
        printf("Right\n");
        break;
    default:
        printf("nop\n");
        break;
    }
    return 0;
}
