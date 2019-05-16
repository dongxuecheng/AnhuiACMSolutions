//
// Created by dongxuecheng on 2019/5/14.
//
#include<iostream>
#include<vector>
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(vector<string>& grid,vector<int>& visted,int x,int y,int n,int nums){
    if(x<0||y<0||x>=grid.size()||y>=grid[x].size()||grid[x][y]!='g') return;
    if(grid[x][y]=='r')
        nums++;
    if(nums==n)
        return;
    grid[x][y]='a';
    visted.push_back(1);
    for (int i = 0; i < 4; ++i) {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx<0||yy<0||xx>=grid.size()||yy>=grid[xx].size())
            continue;
        if(grid[xx][yy]=='r'){
            grid[xx][yy]='a';
            visted.push_back(1);
            nums++;
            if(nums==n)
                return;
            //dfs(grid,visted,xx,yy);
        }
    }
    for (int i = 0; i < 4; ++i) {
        int xx=x+dx[i];
        int yy=y+dy[i];
        dfs(grid,visted,x+dx[i],y+dy[i],n,nums);
    }
}
int main()
{
    int M,N,K;
    cin>>M>>N>>K;
    while(M!=0&&N!=0&&K!=0){
        vector<string> vec;
        vector<int> visted;
        int num=0,nums=0;
        for(int i=0;i<M;i++){
            string s;
            cin>>s;
            vec.push_back(s);
        }
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if(vec[i][j]=='r') num++;
            }
        }
        dfs(vec,visted,0,0,num,nums);
        if(visted.size()<=K)
            cout<<"Poor Johnny,he will never get GJ."<<endl;
        else
            cout<<"Poor Cydornia,he will never get GJ."<<endl;
        cin>>M>>N>>K;

    }
    return 0;
}

