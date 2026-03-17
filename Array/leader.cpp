#include<bits/stdc++.h>
using namespace std;

void leaders(vector<int> &nums){
  int n=nums.size();
  
  
  int leader=-1;
  
  for(int i=n-1; i>=0; i--){
    
    if(nums[i]>leader){
      
      cout<<nums[i]<<" ";
      
    }
    leader=max(leader,nums[i]);
  }

}



int main(){
  int n;
  cin>>n;
  vector<int> nums(n);

  for(int i=0; i<n; i++){
    cin>>nums[i];
  }

  leaders(nums);
  
 return 0;
}



