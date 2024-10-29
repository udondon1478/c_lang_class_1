#include <stdio.h>
int main(int argc, const char *argv[])
{
    char str1[6], str2[6];
    int i, j;
    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        continue;
    }
    if (str1[i - 1] == str2[0])
    {
        printf("OK");
    }
    else
    {
        printf("%c %c", str1[i - 1], str2[0]);
    }
    return 0;
}