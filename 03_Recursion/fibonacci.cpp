#include <bits/stdc++.h>
using namespace std;

/*
Problem: Find nth Fibonacci number

Pattern: recursion, iteration

Sample Input:
6

Sample Output:
8

Approach 1: Brute recursive solution
- fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)
- Time: O(2^n)
- Space: O(n)

Approach 2: Iterative optimal solution
- Build answers from 0 to n
- Time: O(n)
- Space: O(1)
*/

int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }

    int prev2 = 0;
    int prev1 = 1;

    for (int i = 2; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciIterative(n) << '\n';
    // Study switch:
    // cout << fibonacciRecursive(n) << '\n';

    return 0;
}
