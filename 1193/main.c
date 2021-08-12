//
//  main.c
//  1193
//
//  Created by Kim Jae Hyeon on 2021/07/26.
//

#include <stdio.h>

int main(){
    int s=1,m=1,T,count=1;
    scanf("%d", &T);
    
    while(count <= T){
        int inits,initm;
        
        if (s>m && m==1){
            s++;
            count++;
            if(count==T){
                goto EXIT;
            }
            inits = s;
            while(m<inits){
                m++;
                s--;
                count++;
                if(count==T){
                    goto EXIT;
                }
            }
        }
        else if(T==1){
            goto  EXIT;
        }
        else if (m>=s && s==1){
            m++;
            count++;
            if(count==T){
                goto EXIT;
            }
            initm = m;
            while(s<initm){
                s++;
                m--;
                count++;
                if(count==T){
                    goto EXIT;
                }
            }
        }
    }
    printf("%d/%d\n", s,m);
    return 0;
EXIT:{
    printf("%d/%d\n", s,m);
    return 0;
    }
}

