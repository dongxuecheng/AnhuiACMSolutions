//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int N,num=0;
    cin>>N;
    vector<vector<int>> v(N,vector<int>());
        for (int i = 0; i < N; ++i) {
            int max=0;
            for (int j = 0; j < 3; ++j) {
                int temp;
                cin>>temp;
                if(temp>max) max=temp;
                v[i].push_back(temp);
            }
            v[i].push_back(max);
        }
    for (int i = 0; i < N; ++i) {
        int flag=0;
        for (int j = 0; j < 3; ++j) {
            if(v[j][i]<v[j][3])
                flag++;
            else
                break;
        }
        if(flag==3)
            num++;
    }
    cout<<num<<endl;
    return 0;
}
