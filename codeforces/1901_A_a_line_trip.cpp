#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n; // No. of Gas Stations
        cin >> n;
        int x; // Total distance
        cin >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            stations[i] = z;
        }
        int maxdiff = max(stations[0], 2 * (x - stations[n - 1]));
        for (int i = 1; i < n; i++)
        {
            int diff = stations[i] - stations[i - 1];
            maxdiff = max(maxdiff, diff);
        }
        cout << maxdiff << endl;
    }
}
