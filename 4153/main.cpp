//
//  main.cpp
//  4153
//
//  Created by Kim Jae Hyeon on 2021/08/22.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    while(1){
        int a[3];
        for (int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a, a+3);
        if (a[0]==0){
            return 0;
        }
        else if (pow(a[0],2) + pow(a[1],2) == pow(a[2],2)){
            cout<<"right"<<endl;
        }else{
            cout<<"wrong"<<endl;
        }
    }
}
