int Invader(int x, int y){
    return x/y;
}

int main(int argc, const char *argv[])
{
    int coin, money;
    scanf("%d %d", &coin, &money);
    printf("%d", Invader(coin, money));
    return 0;
}
//計算した値をそのままreturnで返せることをx22016 上野くんに教えてもらいました。