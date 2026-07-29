#include <bits/stdc++.h>
using namespace std;

/*
Problem: Longest Consecutive Sequence

Find length of longest consecutive elements sequence (unordered array).

Example:
Input: arr = [100, 4, 200, 1, 3, 2]
Output: 4 (sequence: 1, 2, 3, 4)

Approach Hint: Use unordered_set for O(n) lookup
*/


int solve(vector<int>&arr) {
    unordered_set<int> st(arr.begin(), arr.end());

    int longest = 0;

    for(int num: st){
        if(st.find(num-1)==st.end())
            {
            int current = num;
            int length = 1;

            while(st.find(current+1)!=st.end()){
                current++;
                length++;
            }
            longest = max(longest, length);
        }
    }
    return longest;
}

int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        arr.push_back(q);
    }

    cout<<solve(arr);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
Problem: Longest Consecutive Sequence

Find length of longest consecutive elements sequence (unordered array).

Example:
Input: arr = [100, 4, 200, 1, 3, 2]
Output: 4 (sequence: 1, 2, 3, 4)

Approach Hint: Use unordered_set for O(n) lookup
*/

int solve(vector<int> &arr) {
    unordered_set<int> st(arr.begin(), arr.end());

    int longest = 0;

    for (int num : st) {
        if (st.find(num - 1) == st.end()) {
            int current = num;
            int length = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                length++;
            }
            longest = max(longest, length);
        }
    }
    return longest;
}

int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        arr.push_back(q);
    }

    cout << solve(arr);
    return 0;
}
