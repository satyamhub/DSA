#include <bits/stdc++.h>
using namespace std;

/*
Hashing Basics

Pattern: hashing, frequency counting

Sample Input:
5
1 2 1 3 2
3
1
2
4

Sample Output:
2
2
0

1. Number Hashing
   - Frequency of numbers using map
   - Precomputation Time: O(n log n) with map
   - Query Time: O(log n) per query with map
   - Space: O(n)

2. Character Hashing
   - Frequency of characters using fixed-size array
   - Precomputation Time: O(n)
   - Query Time: O(1)
   - Space: O(1) for ASCII
*/

void numberHashing() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int value : arr) {
        freq[value]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << freq[number] << '\n';
    }
}

void charHashing() {
    string s;
    cin >> s;

    vector<int> freq(256, 0);
    for (char ch : s) {
        freq[static_cast<unsigned char>(ch)]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char ch;
        cin >> ch;
        cout << freq[static_cast<unsigned char>(ch)] << '\n';
    }
}

int main() {
    numberHashing();
    // Study switch:
    // charHashing();

    return 0;
}
