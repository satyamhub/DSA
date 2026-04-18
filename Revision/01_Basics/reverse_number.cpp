#include <bits/stdc++.h>
using namespace std;

/*
Problem: Reverse a Number

Given an integer, reverse its digits. Handle negative numbers appropriately.

Example:
Input: n = 1234
Output: 4321

Approach Hint: Extract digits using modulo and build reversed number
*/

/*
---Brute---------
I will Run while Loop till n not becomes 0.
I will extract lastdigit with n%10
And i will start making number from all last digit.
And At the end i will return the rev.

TC: O(log10(N))
SC: O(1)
*/

/*
---------Optimal-----




*/
void solve(int n) {
    int rev = 0;
    while (n != 0) {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n /= 10;
    }
    cout << rev << endl;
}


int main() {
    // Test cases
    solve(1234);
    solve(2110);
    solve(0);
    solve(120);
    return 0;
}
