#include <bits/stdc++.h>
using namespace std;

int BruteSolution(int nums[], int k, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int xorr = 0;
        for (int j = i; j < n; j++) {
            xorr ^= nums[j];
            if (xorr == k) {
                cnt++;
            }
        }
    }
    return cnt;
}

int BetterSolution(int nums[], int k, int n) {
    int cnt = 0;
    
}

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;

    //-----------Solution-----
    // cout << BruteSolution(nums, k, n);
    cout << BetterSolution(nums, k, n);

    return 0;
}
