#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        //*Brute Approach Time:O(N sqaure) , Space:O(1)
    //     int n = nums.size();
    //     for(int i = 0; i <= n; i++){
    //     bool found = false;
    //     for(int j = 0; j < n; j++){
    //         if(nums[j] == i){
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found)
    //         return i;
    // }
    // return -1;
        

        //* optimal Approach1 Time:O(N) , Space:O(1)
        // int n=nums.size();
        // int totalSum=n*(n+1)/2;
        // int NumSum=0;
        // for(int i=0;i<n;i++){
        //     NumSum=NumSum+nums[i];
        // }
        // return totalSum-NumSum;


        //*--Optimal Approach 2 XOR
        int xor1=0, xor2=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            xor2=xor2^nums[i];
            xor1=xor1^(i);
        }
        xor1=xor1^n;
        return xor1^xor2;
        
}


int main(){
  int n;
  cin>>n;
 vector<int>nums(n);

   for(int i = 0; i < n; i++){
        cin >> nums[i];
    }


  cout<<missingNumber(nums);
  return 0;
}