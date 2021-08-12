//
//  main.c
//  1085
//
//  Created by Kim Jae Hyeon on 2021/07/29.
//

#include <stdio.h>
int main(){
    int x,y,w,h;
    scanf("%d %d %d %d", &x,&y,&w,&h);
    int height = h-y;
    int width = w-x;
    int result1 = height>width? width:height;
    if (result1>=y){
        result1 = y;
        if (result1 >=x){
            result1 = x;
        }
    }else if(result1>=x){
        result1 = x;
    }printf("%d", result1);
}
