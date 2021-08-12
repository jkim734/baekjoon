//
//  main.c
//  2739
//
//  Created by Kim Jae Hyeon on 2021/07/25.
//

#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    for (int i=1; i<10;i++){
        printf("%d * %d = %d\n",N,i,N*i);
    }
}
