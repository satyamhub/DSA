#include <bits/stdc++.h>
using namespace std;

/*
Problem: Check whether a string is a palindrome using recursion

Approach: Compare symmetric characters recursively
- Time: O(n)
- Space: O(n)
*/

bool isPalindrome(const string &s, int index) {
    if (index >= static_cast<int>(s.size()) / 2) {
        return true;
    }
    if (s[index] != s[s.size() - index - 1]) {
        return false;
    }
    return isPalindrome(s, index + 1);
}

int main() {
    string s;
    cin >> s;

    cout << (isPalindrome(s, 0) ? "true" : "false") << '\n';
    return 0;
}
