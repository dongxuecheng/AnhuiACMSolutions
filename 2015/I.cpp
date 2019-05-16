//
// Created by dongxuecheng on 2019/5/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n,m,p,q,num=0;
        cin>>n>>m>>p>>q;
        vector<int> tt;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int temp;
                cin>>temp;
                tt.push_back(temp);
            }
        }
        sort(tt.begin(),tt.end());
        for (int i = 0; i < tt.size(); ++i) {
            if(tt[i]<=tt[p-1])
                num++;
        }
        if(num>q)
            cout<<"-1"<<endl;
        else
            cout<<tt[p-1]<<endl;
    }
    return 0;
}
