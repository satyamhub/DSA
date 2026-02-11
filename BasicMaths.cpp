#include<bits/stdc++.h>
using namespace std;

int reverse(){
          int x;
         cin >> x;
         int revN = 0;

         while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;

            if (revN > INT_MAX/10 || 
               (revN == INT_MAX/10 && lastdigit > 7)) 
                return 0;

            if (revN < INT_MIN/10 || 
               (revN == INT_MIN/10 && lastdigit < -8)) 
                return 0;

            revN = revN *10 + lastdigit;
        }

        cout<<revN;
        return 0;
    }

int armstrong(){
      int x;
      cin >> x;
      int revN = 0;
      int dup=x;

        while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;

            if (revN > INT_MAX/10 || 
               (revN == INT_MAX/10 && lastdigit > 7)) 
                return 0;

            if (revN < INT_MIN/10 || 
               (revN == INT_MIN/10 && lastdigit < -8)) 
                return 0;

            revN = revN + (lastdigit*lastdigit*lastdigit);
        }

         if(revN==dup){
            
            cout<<"true";
        }else{
            cout<<"false";
        };
}

int divisor(){
    //solution 1
    //time complexity : O(x)
    // int x;
    // cin>>x;
    // for (int i=1; i<=x; i++){
    //     if (x/i*i==x){
    //         cout<<i<<endl;
    //     }
    // }

    //solution 2
    //time complexity : O(sqrt(x))
    int x;
    cin>>x;
    vector <int> ls;
    for (int i=1; i*i<x; i++){
        if ((x/i)*i==x){
            ls.push_back(i);
            if(x/i != i){
                 ls.push_back(x/i);
            }
            
        }   
        }sort(ls.begin(), ls.end());
        for (auto it:ls){
        cout<<it<<endl;
    }
}



int main() {
    //reverse();
    //armstrong();
    divisor();

    return 0;
}
