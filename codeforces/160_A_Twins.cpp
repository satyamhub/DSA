#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int totalsum = 0;
    vector<int> coins(n);
    // input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        coins[i] = x;
        totalsum += x;
    }
    // decending order sorting

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (coins[j] > coins[i])
            {
                int temp = coins[i];
                coins[i] = coins[j];
                coins[j] = temp;
            }
        }
    }
    // checking
    int mysum = 0;
    for (int i = 0; i < n; i++)
    {
        mysum += coins[i];
        int remain = totalsum - mysum;
        if (mysum > remain)
        {
            cout << i + 1;
            break;
        }
    }
}
