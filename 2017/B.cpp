//
// Created by dongxuecheng on 2019/5/7.
//
//问题B:电源一拖三
#include <iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while (t--){
        int n,m;
        double sum=0;
        cin>>n>>m;
        for (int i = 0; i < n; ++i) {
            double temp;
            cin>>temp;
            sum+=temp;
        }
        if(n==1|n==0) cout<<"Case "<<++c<<": yes"<<endl;
        else if(15<sum) cout<<"Case "<<++c<<": no"<<endl;
        else if((m*2+1)<n) cout<<"Case "<<++c<<": no"<<endl;
        else cout<<"Case "<<++c<<": yes"<<endl;
    }
    return 0;
}

