//
//  main.c
//  2581
//
//  Created by Kim Jae Hyeon on 2021/07/27.

#include <stdio.h>
#include <math.h>

int isprime(int n){
    if (n <= 1)
        return 0;
    
    if (n%2==0)
        return n==2?2:0;
    
    for (int i=3; i<=sqrt(n); i+=2){
        
        if(n%i==0){
            return 0;
        }
    }
    return n;
}

int main(void){
    int M,N;
    int x=0;
    int sum=0;
    scanf("%d", &M);
    scanf("%d", &N);
    int add[N-M+1];
    for (int i=M;i<=N;i++){
        if(isprime(i) ==0){
            continue;
        }else{
            add[x] = isprime(i);
            x++;
        }
    }
    
    for (int i=0; i<x; i++){
        sum += add[i];
    }
    if (sum == 0){
        printf("-1\n");
    }else{
        
        printf("%d\n", sum);
        printf("%d\n", add[0]);
        
    }
}
