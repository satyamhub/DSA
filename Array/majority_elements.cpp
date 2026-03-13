#include<bits/stdc++.h>
using namespace std;


int majorityElement_Brute(vector<int>&nums){
       //Brute Approach
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>n/2){
                return nums[i];
            }
        }
        return 0;
        
}

int majorityElement_Better(vector<int>&nums){
  //*Better Approach Using map hashing TC: O(NlogN + N), SC:O(N)
  int n=nums.size();
  map<int,int> mpp;
  //*Hashing in map  will take O(N logN)
  for(int i=0; i<n; i++){
    mpp[nums[i]]++;
  }

  //*iterating in map will take O(N)
  for(auto it:mpp){
    if(it.second>n/2){
      return it.first;
    }
  }
  return -1;
}


int majorityElement_Optimal(vector<int>&nums){
      //* Moore Voting Alogorithm
      int n=nums.size();
      int cnt=0;
      int el;
      for(int i=0; i<n; i++){
        if(cnt==0){
          cnt=1;
          el=nums[i];
        }
        else if(nums[i]==el){
          cnt++;

        }else{
          cnt--;
        }
      }
      return el;

}












int main(){
  int n;
  cin>>n;
 vector<int>nums(n);

   for(int i = 0; i < n; i++){
        cin >> nums[i];
    }


  cout<<majorityElement_Optimal(nums);
  return 0;
}