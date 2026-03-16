#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mp;
    mp[0] = -1;

    int sum = 0;
    int left = -1, right = -1;
    int maxLen = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] == 1) sum += 1;
        else sum -= 1;

        if(mp.find(sum) != mp.end()){

            int len = i - mp[sum];

            if(len > maxLen){
                maxLen = len;
                left = mp[sum] + 1;
                right = i;
            }

        } else {
            mp[sum] = i;
        }
    }

    cout << left << " to " << right;
}