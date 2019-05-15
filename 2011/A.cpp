//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
using namespace std;
int main(){
    long long num;
    while (cin>>num){
        long long sum=0,temp;
        temp=num;
        while (num){
            sum+=num%10;
            num/=10;
        }
        if(temp%sum==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
