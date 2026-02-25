#include<bits/stdc++.h>
using namespace std;


void Summation(int i,int sum){
    if(i<0){
        cout<<sum;
        return;
    }
    Summation(i-1, sum+i);
    
}

void reverse(int n, int i){
      if(n<=0){
        return;
      }
      reverse(n-1, i+1);
      cout<<i<<endl;

}

void factorial(int i, int fact){
    if(i<=1){
        cout<<fact;
        return;
    }
    factorial(i-1, fact*i);
    
}

//Array Reverse
int arr[5]={1,2,3,4,5};
int arr1[5];
void reverseArray(int i){
    if(i>=5/2){
        return;
    }
    swap(arr[i], arr[5-i-1]);
    reverseArray(i+1);

}


void printArr(int i){
    if(i>4){
        return;
    }
    cout<<arr[i];
    printArr(i+1);
}

void checkPalindrome(string s,int i){
   if(i>=s.size()/2){
     return;
   }

   swap(s[i],s[s.size()-i-1]);
   cout<<s<<endl;
   checkPalindrome(s,i+1);
      
}

int fiboacci(int n){
    //time complexity O(pow(2,n))
    //

     if(n<=1) return n;
     int last=fiboacci(n-1);
     int slast=fiboacci(n-2);
     return last+slast;
}




int main(){
    int n;
    cin>>n;
    // string s;
    // getline(cin , s);
    // string s1=s;
    //Summation(n,0);
    //reverse(n,1);
    //factorial(n,1);
    // reverseArray(0);
    //printArr(0);
   //checkPalindrome(s,0);
   cout<<fiboacci(5);
    
}


