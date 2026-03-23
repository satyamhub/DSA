#include <bits/stdc++.h>
using namespace std;

/*
Arithmetic and Number Theory Basics

1. Even or odd
   - Time: O(1), Space: O(1)

2. Prime check
   - Brute: count divisors up to n
   - Time: O(n), Space: O(1)
   - Better: count divisors up to sqrt(n)
   - Time: O(sqrt(n)), Space: O(1)
   - Optimal common version here: 6k +/- 1 check
   - Time: O(sqrt(n)), Space: O(1)

3. HCF / GCD
   - Brute: scan from min(a, b) downwards
   - Time: O(min(a, b)), Space: O(1)
   - Optimal: Euclidean algorithm
   - Time: O(log(min(a, b))), Space: O(1)
*/

void evenOdd() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Enter Natural Number\n";
        return;
    }

    cout << (n % 2 == 0 ? "Even\n" : "Odd\n");
}

bool isPrimeOptimal(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

void primeNumber() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Neither Prime nor Composite\n";
        return;
    }

    cout << (isPrimeOptimal(n) ? "Prime\n" : "Composite\n");
}

int hcfBrute(int a, int b) {
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}

int hcfOptimal(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << hcfOptimal(a, b) << '\n';

    // Study switches:
    // evenOdd();
    // primeNumber();
    // cout << hcfBrute(a, b) << '\n';

    return 0;
}
