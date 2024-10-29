#include <stdio.h>
int main(int argc, const char *argv[])
{
    char array[11];
    int count=0;

    scanf("%s", array);
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    count -= 1;
    for (int i = 0; count >= i; count--)
    {
        printf("%c", array[count]);
    }
    printf("\n");
    return 0;
}
