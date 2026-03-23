#include <bits/stdc++.h>
using namespace std;

/*
Basic Maths Problems

1. Reverse integer
   - Time: O(d), Space: O(1), where d is number of digits

2. Armstrong number
   - Time: O(d), Space: O(1)

3. Print divisors
   - Brute: O(n)
   - Better: O(sqrt(n)) with divisor pairing
*/

int reverseNumber(int x) {
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        reversed = reversed * 10 + digit;
    }

    return reversed;
}

bool isArmstrong(int x) {
    int original = x;
    int sum = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        sum += digit * digit * digit;
    }

    return sum == original;
}

vector<int> divisorsBetter(int x) {
    vector<int> result;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            result.push_back(i);
            if (i != x / i) {
                result.push_back(x / i);
            }
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    int x;
    cin >> x;

    vector<int> result = divisorsBetter(x);
    for (int value : result) {
        cout << value << '\n';
    }

    // Study switches:
    // cout << reverseNumber(x) << '\n';
    // cout << (isArmstrong(x) ? "true" : "false") << '\n';

    return 0;
}
