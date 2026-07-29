#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == 1) {
            cout << ((a == 1 && b == 1) ? "Yes" : "No") << '\n';
        } else {
            cout << ((a + b <= n - 2) ? "Yes" : "No") << '\n';
        }
    }

    return 0;
}
