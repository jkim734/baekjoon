//
//  main.cpp
//  3009
//
//  Created by Kim Jae Hyeon on 2021/08/21.
//

#include <iostream>

using namespace std;

int getLastPoint(int a,int b,int c){
    if (a==b)
        return c;
    else if (a==c)
        return b;
    else
        return a;
}

int main(){
    int a,b,c,d,e,f;
    cin>>a>>d;
    cin>>b>>e;
    cin>>c>>f;
    
    cout<<getLastPoint(a, b, c)<<" "<<getLastPoint(d,e,f)<<endl;
}
