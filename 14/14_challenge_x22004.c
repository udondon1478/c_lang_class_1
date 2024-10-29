#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i, j, countstr1 = 0, countstr2 = 0;
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        countstr1++;
        continue;
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
        countstr2++;
        continue;
    }

    for (i = 0; str1[i] != '\0'; i++) // 10行目のifを通るまでstr1の番地を上に数えていく、通らなかったらNoと印字
    {
        if (str1[i] == str2[0]) // str2[0]と同じ文字をstr1の中に発見、str1のi番地が開始地点となる
        {
            for (j = 1; j < countstr2 + 2; j++) // str1の番地がインクリメントされないため変数jを追加することで対応
            {
                if (str1[j + i] == str2[j]) //変数j=1のため一つ上のifより大きい値から文字列の比較が始まる
                {                           // str1とstr2の文字が一致
                    if (str1[j + i] == '\0')
                    {
                        for (i = 0; str1[i] != '\0'; i++, j++)
                        {
                            if (str1[i] == str2[j])
                            {
                                continue;
                            }
                            else if (str2[j] == '\0')
                            {
                                printf("Yes\n");
                                return 0;
                            }
                            else
                            {
                                printf("No1\n");
                                return 0;
                            }
                        }
                    }
                    continue; // continue文、ループをスキップ、次のループを開始    一致するorしない、もしくはstr1のNullに達するまではインクリメント
                }
                /*else if (str2[i] == '\0') // str2の番地がNullに達していたら
                {
                    printf("check");
                    for (i = 0; str1[i] != '\0'; i++, j++) // str1の番地を0に戻す(終わりの文字から始まりの文字につながるため)
                    {
                        if (str1[i] == str2[j]) //文字列の比較、str1は初め([0])に戻ってstr2は12行目のforでインクリメントしたjを引き継ぐ
                        {
                            continue;
                        }
                        else if (str2[j] == '\0') // str2がNullに達するということは比較する文字列が全て参照し終わったことを示す
                        {
                            printf("Yes first\n");
                            return 0;
                        }
                    }
                }
                /*else
                {
                    j++;
                    if (str2[j] == '\0') // str1とstr2が全て一致したら
                    {
                        printf("Yes normal\n");
                        return 0;
                    }
                }*/
            }
        }
        printf("No2\n");
        return 0;
    }
}