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
    int n;
    cin>>n;
    int num=0;
     for(int i=1; i*i<=n; i++){
            if(n%i==0){
              num=num+1;
              if((n/i)!=i){
                num++;
              }
            }
         }
         if(num==2){
            cout<<"Prime";
         }else if(num>1){
            cout<<"Composite";
         }else{
            cout<<"Neither Prime nor Composite";
         }
}

int hcf(){
   //Solution 1
   // time complexity O(min(x,y))
   int x,y;
    cin>>x>>y;
    int c=min(x,y);
    for(int i=c; i>=1; i--){
      if(x%i==0 && y%i==0){
         cout<<i;
         return 0;
         
      }
    }

    //Solution 2
   // time complexity O(log base fi (min(x,y))  )
   int a=x;
   int b=y;
 while(a>0 && b>0){
   if(a>b){
      a=a%b;
   }else{
      b=b%a;
   }
 }
 if(a==0){
   cout<<b;
 }else{
   cout<<a;
 }

       
       
         
       
}

int main(){
  hcf();
}

