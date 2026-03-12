#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOne(vector<int>&nums){
  //*Brute Approach
  int n=nums.size();
  int cnt=0;
  int temp=0;
  for(int i=0; i<n;i++){
    if(nums[i]==1){
      cnt++;
    }
    if(cnt>temp){
       temp=cnt;
    }
    
   if(nums[i]==0){
    cnt=0;
   }
   
  }
   
   return temp;
}







int main(){
  int n;
  cin>>n;
 vector<int>nums(n);

   for(int i = 0; i < n; i++){
        cin >> nums[i];
    }


  cout<<maxConsecutiveOne(nums);
  return 0;
}