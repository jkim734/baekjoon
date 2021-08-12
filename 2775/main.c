//
//  main.c
//  2775
//
//  Created by Kim Jae Hyeon on 2021/07/21.
//

#include <stdio.h>
#include <stdlib.h>

int sigma(int k, int n);

int main(){
    int T,k,n;
    //int *list=malloc(T);
    scanf("%d", &T);
    for (int i=0; i<T; i++){
        scanf("%d", &k);
        scanf("%d", &n);
        
    int list[k-1][n];
        for (i = 0; i<n; i++){
            list[0][i] = i+1;
        }
        for (int i=0;i<k-1;i++){
        for (int j=0;j<n;j++){
            list[i+1][j] = list[i][j] + list[i+1][j-1];
        }
    }
        printf("%d", list[k][n]);
        }
    }
