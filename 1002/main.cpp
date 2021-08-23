//
//  main.c
//  1002
//
//  Created by Kim Jae Hyeon on 2021/07/29.
//

#include <iostream>
#include <cmath>

using namespace std;

double getDistance(int x1,int y1,int x2,int y2){
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x1,x2,y1,y2,r1,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        //case 0
        //한 원이 다른 원 안에 있는경우
        if (getDistance(x1, y1, x2, y2)+r1<r2 ||getDistance(x1, y1, x2, y2)+r2<r1){
            cout<<"0"<<endl;
        }
        //두 원이 서로 접하지 않고 떨어져 있는 경우
        else if(getDistance(x1, y1, x2, y2)>r1+r2){
            cout<<"0"<<endl;
        }
        
        //case 1
        //한 원이 다른 원에 내접하는 경우
        else if(r1+getDistance(x1, y1, x2, y2)==r2 || r2+getDistance(x1, y1, x2, y2)==r1){
            cout<<"1"<<endl;
            
        //한 원이 다른 원에 외접하는 경우
        }
        else if(getDistance(x1, y1, x2, y2)==r2+r1){
            cout<<"1"<<endl;
        }
        
        //case2
        //한 원이 다른 원과 두 점에서 만나는 경우
        else if(getDistance(x1, y1, x1, y2)<r1+r2){
            cout<<"2"<<endl;
        }
        
        //case-1
        //한 원이 다른 원과 일치하는 경우
        else
            cout<<"-1"<<endl;
    }
}
