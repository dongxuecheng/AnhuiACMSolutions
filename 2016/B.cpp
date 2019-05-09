//
// Created by dongxuecheng on 2019/5/9.
//问题B:阵前一等功
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int T;
    cin>>T;
    while (T--){
        int N,K;
        set<int> s;
        vector<int> v;
        cin>>N;
        for (int i = 0; i < N; ++i) {
            int temp;
            cin>>temp;
            s.insert(temp);
        }
        for (set<int>::iterator it=s.begin();it!=s.end();it++) {
            v.push_back(*it);
        }
        cin>>K;
        sort(v.begin(),v.end(),cmp);
        cout<<v[K-1]<<endl;
    }
    return 0;
}
