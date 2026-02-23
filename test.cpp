#include<bits/stdc++.h>
using namespace std;



int main() {
  string s;
  getline(cin, s);

  int j=0;
        while(j<=s.size()){
            if(static_cast<int>(s[j])<97 || static_cast<int>(s[j])>122){
                s.erase(j,1);
            }
            j=j+1;
        }
        string s1=s;
        int i=0;
        while(i>=s.size()/2){
            swap(s[i],s[s.size()-i-1]);
            i=i+1;
        }
        if(s1==s){
            return true;
        }else if(s1==" "){
            return true;
        }else{
            return false;
        }
    
}
