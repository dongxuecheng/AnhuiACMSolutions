//
// Created by dongxuecheng on 2019/5/9.
//问题D:梯田AGAIN
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int T;
    cin>>T;
    while (T){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int temp;
                cin>>temp;
                v.push_back(temp);
            }
        }
        sort(v.begin(),v.end(),cmp);
        for (int i = 0; i < q; ++i) {
            int h,num=0;
            cin>>h;
            for (int j :v) {
                if(j>h) num++;
            }
            cout<<num<<endl;
        }
    }
    return 0;
}

