#include <bits/stdc++.h>
using namespace std;

/*
Problem: Sum of first N natural numbers using recursion

Pattern: recursion

Approach 1: Parameterized recursion
- Pass current number and running sum
- Time: O(n)
- Space: O(n)

Approach 2: Functional recursion
- Return n + sum(n - 1)
- Time: O(n)
- Space: O(n)
*/

void sumParameterized(int n, int sum) {
    if (n == 0) {
        cout << sum << '\n';
        return;
    }
    sumParameterized(n - 1, sum + n);
}

int sumFunctional(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumFunctional(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << sumFunctional(n) << '\n';
    // Study switch:
    // sumParameterized(n, 0);

    return 0;
}
