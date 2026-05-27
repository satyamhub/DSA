#include <bits/stdc++.h>
using namespace std;

/*
Problem: Check if Array is Sorted

Check if an array is sorted in non-decreasing order.

Example:
Input: arr = [1, 2, 2, 3]
Output: true

Approach Hint: Single pass: each element <= next element
*/

void solve(vector<int> &arr) {
    // Write your solution here
    int n = arr.size();
    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        if(arr[i]<=arr[i+1]){
            continue;
        }else{
            flag = 1;
            break;
        }
    }
    if (flag==1){
        cout << "false";
    }else{
        cout << "true";
    }
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
    solve(arr);
    return 0;
}
