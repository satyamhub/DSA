#include <bits/stdc++.h>
using namespace std;
int ncr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{

    cout << ncr(10, 3);
    return 0;
}
