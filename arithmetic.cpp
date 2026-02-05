#include<bits/stdc++.h>

using namespace std;

void EvenOdd(){
    int a;
    cin>>a;
    
    if (a>0 && (a/2)*2==a){
        cout<<"Number "<<a<<" is Even";
    }
    else if(a>0){
        cout<<"Number "<<a<<" is Odd";
    }
    else{
        cout<<"Enter Natural Number";
    }
}

void PrimeNumber(){
   int a;
   cin>>a;

   bool flag=false;

   for(double i=2; i<=sqrt(a); i++) {
 
    cout<<a/i<<endl;
     if((a/i)*i==a){

        flag=true;
       
    }
    //   else{
    //     cout<<"Prime";
         
    //   }
      
   }
   if(flag==true){
    cout<<"Composite";
   }
   else{
    cout<<"Prime";
   }
}

int main(){
   PrimeNumber();
}