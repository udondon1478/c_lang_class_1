#include <stdio.h>

int countStr (char str[101]) {
    int count = 0, i = 0;
    for (i = 0;  str[i]!='\0'; i++)
    {
        count = i;
    }
    return count;
}

int main(int argc, const char * argv[])
{
    char str1[101], str2[101];
    printf("srt? ");
    scanf("%s %s", str1, str2);
    int n=0, m=0;
    n = countStr (str1);
    m = countStr (str2);
    if (n == m)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
    return 0;
}
