#include<bits/stdc++.h>
using namespace std;


void Summation(int i,int sum){
    if(i<0){
        cout<<sum;
        return;
    }
    Summation(i-1, sum+i);
    
}

void Summation2(int n, int i){
      if(n<=0){
        return;
      }
      Summation2(n-1, i+1);
      cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
   // Summation(n,0);
    Summation2(n,1);
}


