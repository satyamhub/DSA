#include <bits/stdc++.h>
using namespace std;

/*
Problem: Find Largest Element in Array

Given an array, find and return the largest element.

Example:
Input: arr = [1, 5, 3, 9, 2]
Output: 9

Approach Hint: Iterate through and track maximum
*/

int solve(vector<int>&arr) {
    // Write your solution here
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n;  i++){
        int q;
        cin >> q;
        arr.push_back(q);
    }

    cout<<solve(arr);
    return 0;
}
