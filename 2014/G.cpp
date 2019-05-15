#include<iostream>
#include <vector>

using namespace std;
bool bfs(vector<bool> grid[],int x,int y){
    int xx[8]={-1,-1,-1,0,0,1,1,1};
    int yy[8]={-1,0,1,-1,1,-1,0,1};
    for(int i=0;i<8;i++){
        int tx=xx[i]+x;
        int ty=yy[i]+y;
        if(tx<0||ty<0||tx>grid->size()-1||ty>grid[tx].size()-1)
            continue;
        if(grid[tx][ty])
            return true;
    }
    return false;
}
int main()
{
    int N,M,K;
    cin>>N>>M>>K;
    vector<bool> chess[M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            chess[i].push_back(false);
        }
    }
    while(K--){
        int r,c;
        cin>>r>>c;
        chess[r-1][c-1]=true;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(chess[i][j]) {
                if(!bfs(chess,i,j)) continue;
                else {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
