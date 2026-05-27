#include <bits/stdc++.h>
using namespace std;

/*
Problem: Square Pattern

Print a square pattern with n rows and n columns using asterisks.

Example:
Input: n = 3
Output:
* * *
* * *
* * *

Approach Hint: Nested loops: i for rows, j for columns
*/

void solve(int n) {
    // Write your solution here
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
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
