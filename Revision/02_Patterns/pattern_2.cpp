#include <bits/stdc++.h>
using namespace std;

/*
Problem: Triangle Pattern

Print a right-angled triangle pattern.

Example:
Input: n = 4
Output:
*
* *
* * *
* * * *

Approach Hint: Outer loop for rows, inner loop prints i asterisks
*/

void solve(int n) {
    // Write your solution here
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    // Test cases
    int n;
    cin >> n;
    solve(n);
    return 0;
}
