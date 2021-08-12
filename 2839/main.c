//
//  main.c
//  2839
//
//  Created by Kim Jae Hyeon on 2021/07/25.
//

#include <stdio.h>

int main(void){
    int N;
    int num = 0;
    scanf("%d", &N);
    int max5 = N/5;
    
    for(int i=max5; i>=0; i--){
        for(int j=0; j<=(N-5*i)/3; j++){
            if (5*i + 3*j == N){
                num = i+j;
                goto EXIT;
            }
        }
    }
    printf("-1\n");
    return 0;
EXIT:
    printf("%d\n", num);
    return 0;
}

