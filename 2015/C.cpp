//
// Created by dongxuecheng on 2019/5/16.
//
#include <iostream>
#include <cmath>
using namespace std;
bool pd(int num){
    int i;
    for (i = 2; i < sqrt(num); ++i) {
        if(num%i==0) break;
    }
    if(i<=sqrt(num))
        return false;
    else
        return true;

}
int main(){
    int T;
    cin>>T;
    while (T--){
        int n,m,a,b;
        bool flag=true;//右边
        cin>>n>>m>>a>>b;
        while (true){
            if(a==m&&pd(b)){
                cout<<"duang"<<endl;
                break;
            }
            else if(a==m){
                cout<<b<<endl;
                break;
            }
            if(pd(b))
                flag=!flag;
            b++;
            if(flag){
                if(a==n)
                    a=1;
                else
                    a++;
            }
            else{
                if(a==1)
                    a=n;
                else
                    a--;
            }
        }
    }
    return 0;
}
