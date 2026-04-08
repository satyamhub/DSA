#include <bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeating(vector<int> arr) {
    int n = arr.size();
    int sum = n * (n + 1) / 2;
    unordered_map<int, int> mpp;
    int arrSum = 0;
    int repeating = 0;

    for (int m : arr) {
        sum += m;
        mpp[m]++;
        if (mpp[m] == 2) {
            repeating = m;
        }
    }

    int missing = sum - repeating;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << missingAndRepeating(arr);
}
