#include <bits/stdc++.h>
using namespace std;

int BetterSolution(int nums[], int k, int n) {
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

int OptimalSolution(int nums[], int k, int n) {
    int cnt = 0;
    int xorr = 0;
    map<int, int> mpp;
    mpp[xorr]++;
    for (int i = 0; i < n; i++){
        xorr ^= nums[i];
        int x = xorr ^ k;
        cnt += mpp[x];
        mpp[xorr]++;
    }
    return cnt;
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
    //cout << BetterSolution(nums, k, n);
    cout << OptimalSolution(nums, k, n);

    return 0;
}
