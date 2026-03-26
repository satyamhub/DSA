#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int ans = 0;
    while (q > 0)
    {
        vector<int> sol(3);
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            sol[i] = x;
        }
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            if (sol[i] == 1)
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            ans++;
        }
        q--;
    }
    cout << ans << endl;
}
