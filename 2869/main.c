//
//  main.c
//  2869
//
//  Created by Kim Jae Hyeon on 2021/07/18.
//
#include <stdio.h>

int main(void)
{
    int A, B, V;
    int day;
    scanf("%d %d %d", &A, &B, &V);


    if (((V-B) % (A - B)) == 0)
    {
        day = (V-B) / (A - B);
    }
    else
    {
        day = (V-B) / (A - B) + 1;
    }
    printf("%d", day);
    return 0;
}
