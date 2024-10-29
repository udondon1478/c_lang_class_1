#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0, j = 0, na, nb, a[10], b[10], keep, check = 0;
    scanf("%d", &na); // Aの要素数

    for (int i = 0; i < na; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < na; i++)
    {
        for (j = 0; j < na; j++)
        {
            if (a[i] < a[j] + 1) //配列aの並び替え
            {
                keep = a[i];
                a[i] = a[j];
                a[j] = keep;
            }
        }
    }

    scanf("%d", &nb); // Bの要素数

    for (int i = 0; i < nb; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < nb; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (b[i] < b[j] + 1) //配列bの並び替え
            {
                keep = b[i];
                b[i] = b[j];
                b[j] = keep;
            }
        }
    }

    for (int i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d\n", b[j]);
                check = 1;  //積集合が空集合ではない
            }
        }
    }

    if (check == 0)
    {
        printf("None");
    }

    return 0;
}