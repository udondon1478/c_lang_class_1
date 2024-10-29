//
//  12_02_heightWeight.c
//  prg202X
//
//  Created by x22004xx on 2022/07/06.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int human[3][2] = {
        {170, 80},
        {160, 50},
        {180, 70},
    };
    for (int i=0; i < 3; i++) {
        printf("身長=%dcm, 体重=%dkg\n", human[i][0], human[i][1]);
    }
    return 0;
}
