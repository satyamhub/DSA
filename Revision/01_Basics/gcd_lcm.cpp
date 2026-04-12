#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
Problem: Find GCD and LCM

Given two numbers, find their Greatest Common Divisor and Least Common Multiple.

Example:
Input: a = 12, b = 18
Output: GCD = 6, LCM = 36

Approach Hint: Use Euclidean algorithm for GCD, then LCM = (a*b)/GCD
*/
/*
-----Brute----
I will Start From smallest number And go to 1 and see which number divides
both number first, then i will return it as GCD.
12%12==0 but 18%12!=0
12%11!=0 also 18%11!=0
...
..
12%6==0 also 18%6==0
so i wll return GCD as 6

Then I will multiply the bigger number from 1 to ...
and check when that number is divisible by both number.
18*1=18 but 18%12!=0 so i wll continue
18*2=36 also 36%12=0 so i will return 36 as LCM

TC:O(min(a,b)) for GCD  && O(a*b) for LCM
SC:O(1)

*/

/*
---Optimal----
GCD(a,b) = GCD(a-b , b) :a>b
also GCD(a,b) = GCD(a%b,b)  :a>b
till one of the a or b becomes 0, then other is GCD
And LCM=(a*b)/GCD

TC:O(log fi(min(a,b)))
SC:O(1)


*/

void solveBrute(int a, int b) {
    int bigger;
    int smaller;
    if (a >= b) {
        bigger = a;
        smaller = b;
    } else {
        bigger = b;
        smaller = a;
    }

    // for GCD
    int GCD;
    int temp = smaller;
    while (true) {
        if (smaller % temp == 0 && bigger % temp == 0) {
            GCD = temp;
            break;
        }
        temp--;
    }

    // For LCM
    int LCM;
    int multiplier = 1;
    while (true) {
        int lcm = bigger * multiplier;
        if (lcm % smaller == 0 && lcm % bigger == 0) {
            LCM = lcm;
            break;
        }
        multiplier++;
    }
    cout << "GCD=" << GCD << " & LCM=" << LCM << endl;
}

void solveOptimal(int a, int b) {
    int GCD;
    int LCM=a*b;

    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if (a == 0) {
        GCD = b;
    } else {
        GCD = a;
    }

    LCM /= GCD;
    cout << "GCD=" << GCD << " & LCM=" << LCM << endl;
}

int main() {
    // Test cases
    solveBrute(12, 18);    // Expected: GCD = 6, LCM = 36
    solveBrute(10, 15);    // Expected: GCD = 5, LCM = 30
    solveOptimal(7, 5);    // Expected: GCD = 1, LCM = 35
    solveOptimal(100, 50); // Expected: GCD = 50, LCM = 100

    return 0;
}
