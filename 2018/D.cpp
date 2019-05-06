//
// Created by dongxuecheng on 2019/5/6.
//
//问题D最大上升子串
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m;
        vector<int> data,dp;
        cin>>n>>m;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            data.push_back(temp);
            dp.push_back(1);
        }
        for (int i = 0; i < m; ++i) {
            int l,r,m=0;
            cin>>l>>r;
            for (int j = l-1; j <=r-1 ; ++j) {
                for (int k = l-1; k < j; ++k) {
                    if(data[k]<data[j])
                        dp[j]=max(dp[j],dp[k]+1);
                }
            }
            for (int j:dp) {
                if(j>m) m=j;
            }
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}
