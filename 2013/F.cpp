#include <iostream>
#include<string>
#include<map>
#include <algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
using namespace std; 
int main() {
        map<char,string> m;
        m[',']="1";
        m['.']="11";
        m['!']="111";
        m['a']="2";
        m['b']="22";
        m['c']="222";
        m['d']="3";
        m['e']="33";
        m['f']="333";
        m['g']="4";
        m['h']="44";
        m['i']="444";
        m['j']="5";
        m['k']="55";
        m['l']="555";
        m['m']="6";
        m['n']="66";
        m['o']="666";
        m['p']="7";
        m['q']="77";
        m['r']="777";
        m['s']="7777";
        m['t']="8";
        m['u']="88";
        m['v']="888";
        m['w']="9";
        m['x']="99";
        m['y']="999";
        m['z']="9999";
        m[' ']="0";
      string line;
      while(getline(cin,line)){
        bool srf=true;
        string res;
        for(int i=0;i<line.size();i++){
            if(line[i]>='0'&&line[i]<='9') {
                if(srf) {
                    srf=!srf;
                    res+='#';
                }
                res+=line[i];
              }else if(isalpha(line[i])){
                if(!srf){
                    srf=!srf;
                    res+='#';
                  }
                string a,b;
                a=m[line[i]];
                b=m[line[i+1]];
                if(a[0]==b[0]){
                    res+=m[line[i]];
                    res+="ok";
                  }else
                    res+=m[line[i]];
              }else if(line[i]==' '){
                if(srf) res+="0";
                else {
                    res+="#0";
                    srf=!srf;
                  }
              }
               
          }
          cout<<res<<endl;
      }
    return 0;
}