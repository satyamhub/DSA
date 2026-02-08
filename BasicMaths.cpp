#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int revN = 0;

        while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;

            if (revN > INT_MAX/10 || 
               (revN == INT_MAX/10 && lastdigit > 7)) 
                return 0;

            if (revN < INT_MIN/10 || 
               (revN == INT_MIN/10 && lastdigit < -8)) 
                return 0;

            revN = revN * 10 + lastdigit;
        }

        return revN;
    }
};

int main() {
    Solution sol;

    int x;
    cin >> x;

    cout <<sol.reverse(x);

    return 0;
}
