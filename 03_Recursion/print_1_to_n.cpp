#include <bits/stdc++.h>
using namespace std;

/*
Problem: Print numbers from 1 to N using recursion

Pattern: recursion, backtracking

Sample Input:
5

Sample Output:
1 2 3 4 5

Approach: Backtracking recursion
- Recurse down to 1, print while returning
- Time: O(n)
- Space: O(n)
*/

void printOneToN(int n) {
    if (n == 0) {
        return;
    }
    printOneToN(n - 1);
    cout << n << ' ';
}

int main() {
    int n;
    cin >> n;

    printOneToN(n);
    cout << '\n';

    return 0;
}
