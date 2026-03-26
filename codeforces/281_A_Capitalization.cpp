#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int first = s[0];
    if (first >= 97)
    {
        s[0] = s[0] ^ 32;
    }
    cout << s;
}
