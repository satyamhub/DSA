#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            s[i] = ch;
        }
        int dot = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ".")
            {
                ans += 2;
            }
        }
        cout << n - ans << endl;
    }
}
