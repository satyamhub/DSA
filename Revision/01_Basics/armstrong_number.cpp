#include <bits/stdc++.h>
using namespace std;

/*
Problem: Check Armstrong Number

Check if a number is Armstrong (sum of cubes of digits equals the number).

Example:
Input: n = 153
Output: true (1^3 + 5^3 + 3^3 = 153)

Approach Hint: Extract digits, cube them, sum, and compare
*/

/*
Brute---
I will Just extract digits and Cube Them and Add them and check with original number
TC:O(Log(n) base 10)
SC:O(1)
*/

void solve(int n) {
    int temp = n;
    int sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        int cube = digit * digit * digit;
        sum += cube;
        temp /= 10;
    }
    if (sum == n) {
        cout << "true";
    } else {
        cout << "false";
    }
}

int main() {
    int n;
    cin >> n;

    solve(n);
    return 0;
}
