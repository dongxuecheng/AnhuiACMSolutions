//
// Created by dongxuecheng on 2019/5/9.
//问题A:砝码称重
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<abs(a*b-c*d)<<endl;
    }
    return 0;
}

