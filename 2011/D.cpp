//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <sstream>
#include <map>
#include <string>
using namespace std;
int main(){
    string sentence,temp;
    stringstream ss;
    map<string,int> m;
    getline(cin,sentence);
    int N;
    for (int i = 0; i < sentence.size(); ++i) {
        if(!isalpha(sentence[i])){
            sentence[i]=' ';
        }
        if(isupper(sentence[i])){
            sentence[i]=sentence[i]+32;
        }
    }

    ss<<sentence;
    while (ss>>temp){
        if(m.count(temp))
            m[temp]++;
        else
            m[temp]=1;
    }
    cin>>N;
    while (N--){
        string t;
        cin>>t;
        cout<<m[t]<<endl;
    }


    return 0;
}
