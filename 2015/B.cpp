//
// Created by dongxuecheng on 2019/5/16.
//
#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n,k;
        cin>>n>>k;
        int flag=-1,temp=k,sum=0;//初始为负数
        for (int i = 1; i <=n ; ++i) {
            if(temp!=0){
                sum+=i*flag;
                temp--;
            }else{
                flag*=-1;
                sum+=i*flag;
                temp=k;
                flag*=-1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
