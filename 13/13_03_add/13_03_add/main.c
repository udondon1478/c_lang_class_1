//
//  main.c
//  13_03_add
//
//  Created by x22004xx on 2022/07/13.
//

#include <stdio.h>
void subof(int c, int d){
    printf("%d + %d = %d\n", c, d, c+d);
}
int main(int argc, const char * argv[]) {
    int a=5, b=10;
    subof(a, b);
    return 0;
}
