//
//  main.c
//  10250
//
//  Created by Kim Jae Hyeon on 2021/07/18.
//

#include <stdio.h>
#include <stdlib.h>

int dispatcher(int H, int W, int N, int T)
{
        if (N%H==0){
            return H*100 + N/H;
        }
        else
        {
            return (N%H)*100 + N/H + 1;
        }
}

int main(void){
    int T;
    scanf("%d",&T);
    //int *list = malloc(T);
    for(int i= 0; i<T;i++){
        int H,W,N;
        scanf("%d %d %d", &H, &W, &N);
        //list[i] = dispatcher(H, W, N, T);
        printf("%d\n", dispatcher(H, W, N, T));
    }
   // for(int i = 0; i<T;i++){
       // printf("%d\n", list[i]);
    }
