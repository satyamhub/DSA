#include<bits/stdc++.h>
using namespace std;


int linearSearch1(int arr[],int n, int k){
  int p=0;
  while(p<n){
    if(arr[p]==k){
      return p;
      
    }
    p++;
  }
  return -1;

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n; i++) cin>>arr[i];

  int k;
  cin>>k;

  cout<<linearSearch1(arr, n,k);
  return 0;
 
}