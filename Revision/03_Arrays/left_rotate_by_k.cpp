#include <bits/stdc++.h>
using namespace std;

/*
Problem: Rotate Array Left by K

Rotate array elements to the left by k positions.

Example:
Input: arr = [1, 2, 3, 4, 5], k = 2
Output: [3, 4, 5, 1, 2]

Approach Hint: Use reversal: reverse first k, last n-k, then entire array
*/


vector<int> solve(vector<int>&arr, int k)   {

    int n = arr.size();
    int left = 0;
    int right = 0;

    vector<int> ans;
    int cnt = 0;
    while (left <= right && right<n) {
        while(cnt!=k){
            right++;
            cnt++;
        }
        ans.push_back(arr[right]);
        right++;
    }

    while(cnt!=0){
        ans.push_back(arr[left++]);
        cnt--;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return ans;
    
}

int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        arr.push_back(q);
    }
    int k;
    cin >> k;
    solve(arr, k);


    return 0;
}
