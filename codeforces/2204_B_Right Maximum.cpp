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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }
        int cnt = 0;
        int left = n - 1;
        while (left > 0)
        {

            while (arr[left] < arr[left - 1])
            {
                left--;
            }
            if (arr[left] >= arr[left - 1])
            {
                if (left == 0)
                {
                    cnt++;
                    break;
                }
                cnt++;
                left--;
            }
        }

        cout << cnt << endl;
    }
}
