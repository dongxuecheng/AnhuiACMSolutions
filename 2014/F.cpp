//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    while (cin>>n){
        int num[n];
        for (int i = 0; i < n; ++i) {
            cin>>num[i];
        }
        sort(num,num+n);
        if(n%2==0)
            printf("%.2lf\n",(num[n/2-1]+num[n/2])/2.0);
        else
            printf("%d.00\n",num[n/2]);
    }

    return 0;
}
