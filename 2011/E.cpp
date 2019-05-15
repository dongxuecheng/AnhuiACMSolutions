//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <queue>

using namespace std;
int main(){
    int n,m,sum=0,rj;
    cin>>n>>m;
    queue<int> q;
    while (n--){
        int temp;
        cin>>temp;
        q.push(temp);
        sum+=temp;
    }
    if(sum%m==0)
        rj=sum/m;
    else
        rj=sum/m+1;
    if(m==1) {
        cout<<sum<<endl;
    }
    else
    {
        while (!q.empty()){
            int temp=rj;
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < q.size(); ++j) {
                    if(temp>q.front())
                    {
                        temp-=q.front();
                        q.pop();
                    }
                    else
                        break;
                }
                temp=rj;
            }
            if(!q.empty())
                rj++;
        }
        cout<<rj<<endl;
    }
    return 0;
}
