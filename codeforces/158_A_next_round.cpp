#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= nums[k - 1] && nums[i] > 0)
        {
            ans++;
        }
    }
    cout << ans;
}
