//
//  main.c
//  9020
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
    int T;
    scanf("%d", &T);
    for(int j=0;j<T;j++){
        int n;
        scanf("%d", &n);
        
        for (int i=n/2;i>=2;i--){
            if (n-i==isprime(n-i)&&i==isprime(i)){
                if (n-i>=i){
                printf("%d %d\n",i,n-i);
                    break;
                }
                else{
                    printf("%d %d\n",n-i,i);
                    break;
                }
            }
        }
    }return 0;
}
