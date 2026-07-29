#include <bits/stdc++.h>
using namespace std;

/*
Problem: Maximum Subarray Sum (Kadane's Algorithm)

Find the maximum sum of any contiguous subarray.

Example:
Input: arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6 (subarray: [4, -1, 2, 1])

Approach Hint: Track current sum and max sum, reset when negative
*/

int solve(vector<int>&arr) {
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(sum, maxi);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        arr.push_back(q);
    }

    cout<<solve(arr);
    return 0;
}
