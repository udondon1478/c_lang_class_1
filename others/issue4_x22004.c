#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);

    char str[n][11];
    int i, j, num[n], a = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        num[i] = 0;
        for (j = 0; str[i][j] != '\0'; j++)
        {
            num[i]++;
        }
    }

    for (i = 0; i < (n - 1); i++)
    {
        if (str[i][num[i] - 1] != str[i + 1][0])
        {
            printf("%c %c\n", str[i][num[i] - 1], str[i + 1][0]);
            a = 0;
            break;
        }
    }
    
    if (a == 1)
    {
        printf("OK\n");
    }
    return 0;
}
// x22019 太田百香さんに教えてもらいました