//
// Created by dongxuecheng on 2019/5/14.
//未成功AC
#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<char>>& grid,vector<int>& visted,int x,int y){
    if(x<0||y<0||x>=grid.size()||y>=grid[x].size()||grid[x][y]!='g'||grid[x][y]!='r') return;
    grid[x][y]='a';
    visted.push_back(1);
    dfs(grid,visted,x+1,y);
    dfs(grid,visted,x-1,y);
    dfs(grid,visted,x,y+1);
    dfs(grid,visted,x,y-1);
}
int main()
{
    int M,N,K;
    cin>>M>>N>>K;
    while(M!=0&&N!=0&&K!=0){
        vector<vector<char>> vec(M, vector<char>());
        vector<int> visted;
        for (int i = 0; i < M; i++) {
            vec[i].resize(N);
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                char temp;
                cin>>temp;
                vec[i].push_back(temp);
            }
        }
        dfs(vec,visted,0,0);
        /*if(visted.size()-1<=K)
            cout<<"Poor Johnny,he will never get GJ."<<endl;
        else
            cout<<"Poor Cydornia,he will never get GJ."<<endl;*/
        cout<<visted.size()<<endl;
        cin>>M>>N>>K;

    }
    return 0;
}

