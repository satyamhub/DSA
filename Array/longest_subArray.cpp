//*Longest subarray with summation k

#include<bits/stdc++.h>
using namespace std;

int longestSubArrOptimal(vector<int> &nums,int k){
  //*Optimal Time:O(2N)
  //* Only if there is no negative
  int n = nums.size();
  int sum = 0;
  int maxi = 0;

  int p1 = 0;
  int p2 = 0;

  while(p2 < n){

    sum += nums[p2];

    while(sum > k){
      sum -= nums[p1];
      p1++;
    }

    if(sum == k){
      maxi = max(maxi , p2 - p1 + 1);
    }

    p2++;
  }

  return maxi;
}


int longestSubArrBrute(vector<int> &nums,int k){
  unordered_map<int,int> mp;
    int sum = 0;
    int maxi = 0;

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];

        if(sum == k)
            maxi = i + 1;

        if(mp.find(sum - k) != mp.end()){
            maxi = max(maxi, i - mp[sum - k]);
        }

        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }

    return maxi;
}


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0; i<n; i++) cin>>nums[i];

  int k;
  cin>>k;

  cout<<longestSubArrBrute(nums,k);
  return 0;
}