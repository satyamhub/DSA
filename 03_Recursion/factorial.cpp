#include <bits/stdc++.h>
using namespace std;

/*
Problem: Factorial of N using recursion

Pattern: recursion

Sample Input:
5

Sample Output:
120

Approach 1: Parameterized recursion
- Time: O(n)
- Space: O(n)

Approach 2: Functional recursion
- Time: O(n)
- Space: O(n)
*/

void factorialParameterized(int n, int fact) {
    if (n <= 1) {
        cout << fact << '\n';
        return;
    }
    factorialParameterized(n - 1, fact * n);
}

int factorialFunctional(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialFunctional(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << factorialFunctional(n) << '\n';
    // Study switch:
    // factorialParameterized(n, 1);

    return 0;
}
