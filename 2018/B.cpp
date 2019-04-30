//
// Created by dongxuecheng on 2019/4/29.
//
//问题 B: 做操的时候要排好队
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int bj(int a,int b){
    return a>b ? a:b;
}
int main(){
    int t,n,temp,max=0;
    vector<int> vec;
    vector<int> res;
    cin>>t;
    while (t--){
        cin>>n;
        while (n--){
            cin>>temp;
            vec.push_back(temp);
        }
        for (int i = 0; i < vec.size()-2; ++i) {
            int m=bj(0,(vec[i]-vec[i+1]))+bj(0,(vec[i+1]-vec[i+2]));
            if(m>max) max=m;
        }
        res.push_back(max);
        max=0;
        vec.clear();
    }
    for (int i:res) {
        cout<<i<<endl;
    }

    return 0;
}
