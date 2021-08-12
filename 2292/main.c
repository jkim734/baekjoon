//
//  main.c
//  2292
//
//  Created by Kim Jae Hyeon on 2021/07/18.
//
#include <stdio.h>
int main()
{
    int n;
    int maxnum=0; int distance = 1;
    scanf("%d",&n);

    for(int i=1;i<n;i+= maxnum){
        distance++;
        maxnum=+6;
    }

    printf("%d",distance);

    
    return 0;
}
