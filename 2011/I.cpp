//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
using namespace std;
int main(){
    int n,m,x=1,y=1;
    cin>>n>>m;
    for (int x = 1; x<m; ++x) {
        for (int y = 1; y<n; ++y) {
            if((4*x+2*y)==m&&(x+y)==n)
            {
                cout<<x<<" "<<y<<endl;
            }
        }
    }
    return 0;
}
