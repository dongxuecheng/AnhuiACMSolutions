//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
using namespace std;
int main(){
    int T,num=0;
    cin>>T;
    while (T--){
        string s;
        cin>>s;
        if(s.find("13")==string::npos){
            cout<<"Case #"<<++num<<": Yes, I like it!"<<endl;
        }
        else
            cout<<"Case #"<<++num<<": No, it's terrible!"<<endl;
    }
    return 0;
}
