#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> rightmostMaxPos(n);
        int maxVal = -1, pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxVal)
            {
                maxVal = a[i];
                pos = i;
            }
            else if (a[i] == maxVal)
            {
                pos = i;
            }
            rightmostMaxPos[i] = pos;
        }

        int cnt = 0;
        int i = n - 1;
        while (i >= 0)
        {
            i = rightmostMaxPos[i] - 1;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
