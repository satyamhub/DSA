#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=0;
     for(int i=1; i<=n; i++){
            if(n%i==0){
              num=num+1;
            }
         }cout<<num;
         if(num==3){
            return true;
         }else{
            return false;
         }
}