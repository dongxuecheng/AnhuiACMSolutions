//
// Created by dongxuecheng on 2019/4/29.
//
//问题 E: 雄伟的城堡
/* 广搜的方法
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int t,n,m;
    cin>>t>>n>>m;
    vector<vector<int>> v;
    vector<int> v1;
    pair<int,int> p;
    queue<pair<int,int>> q;
    int size=0,max=0;
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    while (t--){
        for (int i = 0; i < n; i++) {
            v1.clear();
            for (int j = 0; j < m; j++) {
                int temp;
                cin>>temp;
                v1.push_back(temp);
            }
            v.push_back(v1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(v[i][j]==0) continue;
                if(v[i][j]==1){
                    size++;
                    v[i][j]=0;
                    p.first=i;
                    p.second=j;
                    q.push(p);
                    while (!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        for (int k = 0; k < 4; k++) {
                            int xx=x+dx[k];
                            int yy=y+dy[k];
                            if(xx<0||xx>=n||yy<0||yy>=m) continue;
                            if(v[xx][yy]==1){
                                size++;
                                v[xx][yy]=0;
                                p.first=xx;
                                p.second=yy;
                                q.push(p);
                            }
                        }
                    }

                    if(size>max) {
                        max=size;
                        size=0;
                    }

                }
            }
        }
        cout<<max<<endl;
        size=0;
        max=0;
        v.clear();
    }
    return 0;
}
*/
//深搜的方法
#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<char>>& grid,vector<int>& visted,int x,int y){
    if(x<0||x>=grid.size()||y<0||y>=grid[x].size()||grid[x][y]=='0') return;
    grid[x][y]='0';
    visted.push_back(1);
    dfs(grid,visted,x+1,y);
    dfs(grid,visted,x-1,y);
    dfs(grid,visted,x,y+1);
    dfs(grid,visted,x,y-1);
}
int main(){
    int t,n,m,size=0,max=0;
    cin>>t;
    while (t--) {
        cin >> n >> m;
        //定义二维数组并初始化
        vector<vector<char>> vec(n, vector<char>());
        vector<int> visted;
        for (int i = 0; i < n; i++) {
            vec[i].resize(m);
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char temp;
                cin >> temp;
                vec[i][j] = temp;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(vec[i][j]==0) continue;
                dfs(vec,visted,i,j);
                size=visted.size();
                visted.clear();
                if(size>max) max=size;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}