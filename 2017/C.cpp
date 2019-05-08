//
// Created by dongxuecheng on 2019/5/7.
//
//问题C刷题：超时
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool check(vector<int> data){
    for (int i = 1; i < data.size(); ++i) {
        if(data[0]<=data[i]) return false;
    }
    return true;
}
int main(){
    int t,c=0;
    cin>>t;
    while (t--){
        int n,m,num=0;
        vector<int> data;
        cin>>n>>m;
        int visted[n];
        for (int i = 0; i < n; ++i) {
            int tp;
            cin>>tp;
            data.push_back(tp);
            visted[i]=0;
        }
        while (!check(data)){
            if(m==n) {
                cout<<"Case "<<++c<<": Impossible"<<endl;
                break;
            }
            int min=100000;
            for (int i = 0; i < m-1; ++i) {
                int xb=0;
                for (int j = 1; j < data.size(); ++j) {
                    if(data[j]<=min&&visted[j]==0) {
                        xb=j;
                        min=data[j];
                    }
                }
                data[xb]++;
                visted[xb]=1;
                data[0]++;
                num++;
            }
            for (int i = 0; i < n; ++i) {
                visted[i]=0;
            }
        }
        cout<<"Case "<<++c<<": "<<num<<endl;
    }
    return 0;
}
