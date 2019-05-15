#include <iostream>
#include<string>
#include<sstream>
#include <algorithm>

using namespace std; 
int main() {
    string line,out;
    stringstream ss;
    while( getline(cin,line)){
        ss<<line;
        while(ss>>out){
            char t= out[out.size()-1];
            if(t>='a'&&t<='z'||t>='A'&&t<='Z')
             reverse(out.begin(),out.end());
            else
            reverse(out.begin(),out.end()-1);
            cout<<out<<" ";
        }
        ss.clear();
        cout<<endl;
    }
     
 
 
    return 0;
}