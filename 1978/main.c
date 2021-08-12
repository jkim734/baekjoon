//
//  main.c
//  1978
//
//  Created by Kim Jae Hyeon on 2021/07/26.
//

#include <stdio.h>
int main()
{
    int N,count2=0;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int count1=0;
        int PrimeNum;
        scanf("%d",&PrimeNum);
        if(PrimeNum == 2){
            count2++;
            continue;
        }
        else{
            
            
        for(int j=2;j<PrimeNum;j++){
            if(PrimeNum%j==0){
                break;
            }
            else if(PrimeNum>=1){
                count1++;
            }
        }
        }if (count1 == PrimeNum-2){
            count2++;
        }
    }
    printf("%d", count2);
}
