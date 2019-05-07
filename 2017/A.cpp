//
// Created by dongxuecheng on 2019/5/7.
//问题A:找零
#include <iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while (t--){
        int n;
        double m,sum=0.0;
        cin>>n>>m;
        for (int i = 0; i < n; ++i) {
            double pi;
            int ci;
            cin>>pi>>ci;
            sum=sum+pi*ci;
        }
        if((int)(sum*100)%10!=0) {sum=((int)(sum*10)+1)/10.0;}
        if(m-sum==0) cout<<"Case "<<++c<<": 0.00"<<endl;
        else if(m-sum<0) cout<<"Case "<<++c<<": "<<-1<<endl;
        else printf("Case %d: %.2f\n",++c,m-sum);
    }
    return 0;
}
