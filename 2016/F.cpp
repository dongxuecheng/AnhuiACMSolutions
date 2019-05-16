//
// Created by dongxuecheng on 2019/5/15.
//超时
#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;
int main(){
    int T;
    cin>>T;

    while (T--){
        int N,M,num=0;
        map<int,int> m,degree;
        vector<int> v;
        cin>>N>>M;
        for (int i = 1; i <=N; ++i) {
            degree[i]=0;
        }
        for (int i = 0; i < M; ++i) {
            int t1,t2;
            cin>>t1>>t2;
            m[t1]=t2;
            degree[t2]++;
        }
//        int flag=0;
//        while (num!=N){
//            for(int i=degree.size();i>0;i--){
//                if(degree[i]==0)  {
//                    num++;
//                    v.push_back(i);
//                }
//            }
//            flag++;
//        }

        while (num!=N){
            for (int i=degree.size();i>0;i--){
                if(degree[i]==0){
                    num++;
                    v.push_back(i);
                    degree[m[i]]--;
                    degree[i]--;
                }
            }
        }
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

