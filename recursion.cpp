#include<bits/stdc++.h>
using namespace std;
int a=1;
void funct(){
 if(a==4){
    return ;
 }

 cout<<"Satyam"<<endl;
 a=a+1;
 funct();
}

int i,n;


void funct1(int i, int n){
    if(i>n){
        return;
    }
    cout<<n-i+1<<endl;
    funct1(i+1, n);


}


int main(){
    cin>>n;
    i=1;
    funct1(i, n);
}


