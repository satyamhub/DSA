#include <bits/stdc++.h>
using namespace std;

int target(vector<int> &nums, int k){
    vector<int> freq(60, 0);
    int cnt = 0;
    
    for (int x : nums) {
        
        int rem = x % 60;
        int needed = (60 - rem) % 60;
        cnt=cnt+ freq[needed];
        
        freq[rem]++;
    }

    return cnt;

}




int main() {

   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   cout<<target(arr,60);

}