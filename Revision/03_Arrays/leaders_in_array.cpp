#include <bits/stdc++.h>
using namespace std;

/*
Problem: Leaders in Array

Element is leader if all elements to its right are smaller.

Example:
Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]

Approach Hint: Traverse right to left, track max
*/

void solve(vector<int>&arr) {
    // Write your solution here
    int n = arr.size();
    int maxi = INT_MIN;

    for (int i = n-1; i >=0; i--){
        if(arr[i]>maxi){
            cout << arr[i]<<" ";
        }
        maxi = max(arr[i], maxi);
    }
}


int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        arr.push_back(q);
    }

    solve(arr);
    return 0;
}
