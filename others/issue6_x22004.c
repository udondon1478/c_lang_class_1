#include <stdio.h>
int main(int argc, const char *argv[])
{
    char g[101], s[101];
    int i, count = 1, leng = 0, lens = 0;
    scanf("%s %s", g, s);

    for (i = 0; g[i] != '\0'; i++) // len1はNullを含む文字数
    {
        leng++;
        continue;
    }

    for (i = 0; s[i] != '\0'; i++) // len2はNullを含む文字数
    {
        lens++;
        continue;
    }

    for (i = 0; i < lens; i++)
    {
        if (s[i] == g[0])
        {
            for (int j = 1; j < leng; j++)
            {
                if (g[j] == s[i + j])
                {
                    count++;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if (count == leng)
    {
        printf("%s", s);
    }
    else
    {
        printf("None\0");
    }

    return 0;
}
//第14回のチャレンジ課題を期限が切れてからも頑張って解いていたため15分くらいですぐ解けました ( *｀ω´) ﾄﾞﾔｧ