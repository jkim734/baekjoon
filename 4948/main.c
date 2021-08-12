//
//  main.c
//  4948
//
//  Created by Kim Jae Hyeon on 2021/07/29.
//

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

int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        else{
            int count=0;
            for (int i=n+1; i<=2*n;i++){
                if(i==isprime(i)){
                    count++;
                }
            }
        printf("%d\n", count);
    }
    } return 0;
}
