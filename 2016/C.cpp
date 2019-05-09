//
// Created by dongxuecheng on 2019/5/9.
//问题C：箭无虚发（WA）
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n,t;
        cin>>n;
        int time[n][3];
        vector<int> mindata;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin>>time[i][j];
            }
            mindata.push_back(time[i][0]);
        }
        sort(mindata.begin(),mindata.end());
        for (int k : mindata) {
            cout<<k<<endl;
        }
        cin>>t;
        int x=0,sum=0,kh=t;
        for (int i = 0; i < n; ++i) {
            if(t-mindata[i]>0){
                t-=mindata[i];
                x++;
            }
            sum+=time[i][2];
        }
        if(kh<sum) cout<<"Oh,my god!"<<endl;
        else cout<<x<<endl;
    }
    return 0;
}


