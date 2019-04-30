//
// Created by dongxuecheng on 2019/4/29.
//
// 问题 A2: 编译错误（未成功AC）
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int t;
    vector<int> res;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<string,string> data;
        for (int i = 0; i < n; ++i) {
            string temp1,temp2;
            cin>>temp1>>temp2;
            data[temp1]=temp2;
        }
        map<string,string>::iterator it;
        it = data.begin();
        while(it !=data.end())
        {
            cout<<it->first<<" "<<it->second<<endl;
            //;
            it ++;
        }
    }
    return 0;
}