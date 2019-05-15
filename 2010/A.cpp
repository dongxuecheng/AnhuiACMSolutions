//
// Created by dongxuecheng on 2019/5/15.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){
    string word,sentence;
    while (getline(cin,word)){
        getline(cin,sentence);
        int num=0;
        for (int i = 0; i < word.size(); ++i) {
            if(isupper(word[i])){
                word[i]=word[i]+32;
            }
        }
        for (int i = 0; i < sentence.size(); ++i) {
            if(isupper(sentence[i])){
                sentence[i]=sentence[i]+32;
            }
        }
        while (true){
            if(sentence.find(word)!=string::npos){
                sentence= sentence.substr(sentence.find(word)+word.size(),sentence.size());
                num++;
            }else{
                break;
            }
        }
        cout<<num<<endl;
    }

}
