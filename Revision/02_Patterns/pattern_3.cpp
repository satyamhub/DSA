#include <bits/stdc++.h>
using namespace std;

/*
Problem: Pyramid Pattern

Print a pyramid pattern centered with spaces and asterisks.

Example:
Input: n = 5
Output:
    *            4 space
   * *           3 space
  * * *          2 space
 * * * *         1 space
* * * * *        0 space

Approach Hint: For each row, print spaces then asterisks
*/

void solve(int n) {
    // Write your solution here
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(j<n-i-1){
                cout << " ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main() {
    // Test cases
    int n;
    cin >> n;
    solve(n);
    return 0;
}
