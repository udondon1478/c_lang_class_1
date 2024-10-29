#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m, l, ok=0;
    char str1[6];
    scanf("%d", &n);
    scanf("%s", str1);
    for (int i = 0; i < n; i++)
    {
        char str2[6];
        scanf("%s", str2);
        for (m = 0; str1[m]; m++) // str1の文字数カウント=m
        {
            continue;
        }
        if (str1[m - 1] == str2[0])
        {
            for (l = 0; l < 5; l++)
            {
                str1[l] = str2[l];
                ok++;
            }
        }
        else
        {
            printf("%c %c", str1[m - 1], str2[0]);
        }
    }
    if (n == ok)
    {
        printf("OK\n");
    }
    return 0;
}