#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string ch;
    cin >> ch;

    for (int i = 0; i < n-1; i++) {
        int current = ch[i];
        int next = ch[i + 1];
        if (current > next) {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2;
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
