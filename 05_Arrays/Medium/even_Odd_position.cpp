//shift all odd index elements in front and all even index elements in last.
//Eg: Input: [1,2,3,4,5]
//    output: [1,3,5,2,4]

#include <bits/stdc++.h>
using namespace std;

void shift(vector<int> &a) {
    int n = a.size();

    for (int i = 2; i < n; i += 2) {
        int temp = a[i];

        for (int j = i; j > i / 2; j--)
            a[j] = a[j - 1];

        a[i / 2] = temp;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};

    shift(a);

    for (int x : a)
        cout << x << " ";
}
