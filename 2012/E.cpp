//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main(){
    int t,num=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int temp=n;
        while(n){
            temp=n%2;
            s+=to_string(temp);
            n=n/2;
        }
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='1'){
                cout<<"Case #"<<++num<<": "<<pow(2,i)<<endl;
                break;
            }
        }

    }
    return 0;
}
