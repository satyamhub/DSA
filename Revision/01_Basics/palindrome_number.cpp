#include <bits/stdc++.h>
using namespace std;

/*
Problem: Check if Number is Palindrome

Check if a given number reads the same forwards and backwards.

Example:
Input: n = 121
Output: true (or 1)

Approach Hint: Reverse the number and compare with original
*/

/*
----Brute-----
I will extract digit from back and make a number.
and check if my number is equal to the given number
if its equal then i will return true
else false

121
number of digit = log10(123) + 1=2+1 = 3
121%10=1
sum=1*100=100
sum+=2*10=120
sum+=1*1=121
sum==original : true

TC:O(log10(n)+1)
SC:(1)
*/

/*
----Optimal-----------
I will extract last digit and put in rev=rev*10+lastdigit this will start making
the a number from end without using pow.
i will run loop till (n>rev)
if(n==rev) or (n=rev/10) i will return yes
else no

Complexity
Time: O(log₁₀ n)
Space: O(1)
*/

void solveBrute(int n) {
    int original = n;
    int numberofdigit = log10(n) + 1;
    int sum = 0;
    while (n != 0) {
        int lastdigit = n % 10;
        sum += lastdigit * pow(10, numberofdigit - 1);
        numberofdigit--;
        n /= 10;
    }
    if (sum == original) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void solveBest(int n) {
    if (n < 0 || (n % 10 == 0 && n != 0)) {
        cout << "NO" << endl;
        return;
    }

    int rev = 0;

    while (n > rev) {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n /= 10;
    }

    if (n == rev || n == rev / 10) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    // Test cases
    solveBest(121);
    solveBest(126);
    solveBest(0);
    solveBest(121121);
    return 0;
}
