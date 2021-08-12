//
//  main.c
//  2751
//
//  Created by Kim Jae Hyeon on 2021/07/25.
//

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int N,min,index;
    scanf("%d", &N);
    int *a = malloc(N);
    for (int i=0; i<N;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if (a[i] == a[j]){
                a[j] = NULL;
            }
        }
    }
    
    
    for (int i=0;i<N-1;i++){
        min = i;
        for (int j=i+1; j<N;j++){
            if(a[min]>a[j]);
            min = j;
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d\n", a[i]);
    }
    return 0;
}

