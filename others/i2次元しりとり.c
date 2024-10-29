#include <stdio.h>
int main(int argc, const char *argv[])
//二次元配列に文字を格納
{
    int n, j = 0, i = 0;
    scanf("%d", &n);
    char str[n][6];
    for (j = 0; j < n; j++)
    {
        scanf("%s", str[]);
    }
}
//文字数カウント
for (int z = 0; z < n; z++)
{
    for (j = 0; str[i][j] != '\0'; j++)
    {
        continue;
    }
    if (str[i][j - 1] == str[i + 1][0])
    {
        i++;
    }else{
        printf("%d %d\n", str[i][j - 1], str[i + 1][0]);
    }
}
if (i == z)
{
    printf("OK\n");
}


// str[0からの数字]の文字数-1とstr[0からの数字+1][0]がイコールであるか判定