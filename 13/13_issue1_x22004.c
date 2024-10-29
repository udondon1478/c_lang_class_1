#include <stdio.h>

void calcPolygon(int x) {
    int polygon;
    polygon = x / 180 + 2; //頂点数計算
    printf("%d\n", polygon);
}

int main(int argc, const char * argv[])
{
    int angle;
    printf("angle? ");
    scanf("%d", &angle); //角度入力
    calcPolygon(angle);
    return 0;
}
