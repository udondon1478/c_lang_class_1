#include <stdio.h>
int main(int argc, const char *argv[])
{
    int c = 0, s = 0;
    char animal[4];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s\n", animal);
        if (animal[0] == 'm')
        {
            c++;
        }
        else
        {
            s++;
        }
    }
    
    if (c > s)
    {
        printf("cow");
    }
    else
    {
        printf("sheep");
    }
    return 0;
}