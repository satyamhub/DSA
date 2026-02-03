#include <bits/stdc++.h>

using namespace std;


void pattern1(int n){
//    ****
//    ****
//    ****
//    ****
      for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){ 
            cout<<"*";
        }
        cout<<endl;
      }

}

void pattern2(int n){
//    *
//    **
//    ***
//    ****
      for (int i=0; i<n; i++){
            for (int j=0; j<=i; j++){ 
            cout<<"*";
        }
        cout<<endl;
      }

}

void pattern3(int n){
//    1
//    12
//    123
//    1234
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                    cout<<j;
                }
                 cout<<endl;
        }
      }


void pattern4(int n){
//    1
//    22
//    333
//    4444
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                    cout<<i;
                }
                 cout<<endl;
        }
      }

void pattern5(int n){
//    ****
//    ***
//    **
//    *
       //Solutiion 1
        for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                    cout<<"*";
                }
                 cout<<endl;
        }
     
      //Solution 2
        for (int i=1; i<=n; i++ ){
            for (int j=1; j<=n-i+1; j++){
                cout<<"*";
            }
            cout<<endl;

        }
 }

void pattern6(int n){
//    4444
//    333
//    22
//    1
       for (int i=1; i<=n; i++ ){
        for (int j=1; j<=n-i+1; j++){
            cout<<n-i+1;
        }
            cout<<endl;
       }
}

void pattern7(int n){
//       *
//      ***
//     *****
//    *******
       
        for(int i=1; i<=n; i++){
          for(int k=0; k<n-i; k++ ){
            cout<<" ";
          }
            for(int j=0; j<2*i-1; j++){
                cout<<"*";
            }
                 cout<<endl;
        }

}

void pattern8(int n){
//    *******
//     *****
//      ***
//       *
       
        for(int i=1; i<=n; i++){
          for(int k=0; k<i-1; k++ ){
            cout<<" ";
          }
            for(int j=0; j<2*(n-i)+1; j++){
                cout<<"*";
            }
                 cout<<endl;
        }

}

void pattern9(int n){
//       *
//      ***
//     *****
//    *******
//    *******
//     *****
//      ***
//       *
         for(int i=1; i<=n; i++){
          for(int k=0; k<n-i; k++ ){
            cout<<" ";
          }
            for(int j=0; j<2*i-1; j++){
                cout<<"*";
            }
                 cout<<endl;
        }
        for(int i=1; i<=n; i++){
          for(int k=0; k<i-1; k++ ){
            cout<<" ";
          }
            for(int j=0; j<2*(n-i)+1; j++){
                cout<<"*";
            }
                 cout<<endl;
        }
}


int main(){
    int n=4;
   pattern9(n);
 
    
}

