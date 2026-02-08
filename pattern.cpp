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

void pattern10(int n){
     for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
          char ch=(char)'A'+j;
          cout<<ch;
        }cout<<endl;
     }
}

void pattern11(int n){
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
      //solution 1
       for(int i=1; i<=2*n-1; i++){
        if(i<=n){
          for(int j=1; j<=i; j++){
          cout<<"*";
        }
        }
        if(i>n){
          for(int j=1; j<=2*n-i; j++){
          cout<<"*";
        }
        
       }cout<<endl;
      }
      cout<<endl;
      //solution 2
      for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n){stars=2*n-i;}
        for(int j=0; j<stars; j++){
          cout<<"*";
        }
        cout<<endl;
      }


}

void pattern12(int n){
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        cout<<j;
        
      }
      for(int j=1; j<=2*n-2*i; j++){
        cout<<" ";
        
      }
      for(int j=i; j<2*i; j++){
        cout<<2*i-j;
        
      }
      cout<<endl;
    }
}

void pattern13(int n){
 // 1
//  2 3
//  4 5 6   
//  7 8 9 10
//  11 12 13 14 15
    // solution 1
    for(int i=1; i<=n; i++){
      for(int j=(i*(i-1)/2)+1; j<=i*(i+1)/2; j++){
          cout<<j<<" ";
      }
      cout<<endl;
    }

    // solution 2
      int num=1;
      for(int i=1; i<=n; i++){
          for(int j=1; j<=i; j++){
          cout<<num<<" ";
          num=num+1;
      }
        
      cout<<endl;
    }
}

void pattern14(int n){
    
}


int main(){
    int n=5;
   pattern14(n);
  
 
    
}

