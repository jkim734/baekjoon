//
//  main.c
//  baekjoon
//
//  Created by Kim Jae Hyeon on 2021/07/18.
#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (b >= c){
        printf("%d", -1);
        return 0;
    }
    else{
        printf("%d", (a/(c-b))+1);
    }
}
