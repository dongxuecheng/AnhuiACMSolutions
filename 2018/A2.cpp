//
// Created by dongxuecheng on 2019/4/29.
//
// 问题 A2: 编译错误
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int r=0;
void bfs(int n,bool v[],int indeg[],vector<int> grid[]){
    queue<int> q;
    q.push(n);
    r++;
    v[n]=true;
    while (!q.empty()){
        int u=q.front();
        q.pop();
        for (int i = 0; i < grid[u].size(); ++i) {
            int t=grid[u][i];
            indeg[t]--;
            if(indeg[t]==0&&v[t]== false){
                v[t]=true;
                q.push(t);
                r++;
            }
        }
    }
}
int main(){
    int t,v1,v2;
    vector<int> res;
    map<string,int> mp;
    cin>>t;
    while (t--){
        int n,size=0;
        cin>>n;
        vector<int> grid[n+1];
        bool v[n+1];//是否访问
        int indeg[n+1];//入度
        for (int i = 0; i < n; ++i) {
            indeg[i]=0;//入度初始化为0
        }
        //输入
        for (int i = 0; i < n; ++i) {
            string temp1,temp2;
            cin>>temp1>>temp2;
            if(mp.end()==mp.find(temp1)) mp[temp1]=++size;
            v1=mp[temp1];
            if(mp.end()==mp.find(temp2)) mp[temp2]=++size;
            v2=mp[temp2];
            grid[v1].push_back(v2);
            v[i]= false;
        }
        for (int i = 1; i < n+1; ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                int temp=grid[i][j];
                indeg[temp]++;
            }
        }
        for (int i = 1; i < n+1; ++i) {
            if(indeg[i]==0&&v[i]== false) bfs(i,v,indeg,grid);
        }
        if(r==n-1) cout<<"Passed"<<endl;
        else cout<<"Failed"<<endl;
        r=0;
        grid->clear();
        mp.clear();
    }
    return 0;
}