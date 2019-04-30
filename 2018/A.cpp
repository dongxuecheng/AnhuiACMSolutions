//
// Created by dongxuecheng on 2019/4/29.
//
//问题A： 数7
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    vector<int> res;
    cin>>t;
    while (t--){
        int l,r,sum=0;
        cin>>l>>r;
        for (int i = l; i <=r; i++) {
            int temp1=i,temp2=i;
            while (temp1){
                if(temp1%10==7) sum++;
                temp1/=10;
            }
            while (temp2){
                if(temp2%7==0) {
                    sum++;
                    temp2/=7;
                }else break;
            }
        }
        res.push_back(sum);
    }
    for(int i:res){
        cout<<i<<endl;
    }
    return 0;
}
