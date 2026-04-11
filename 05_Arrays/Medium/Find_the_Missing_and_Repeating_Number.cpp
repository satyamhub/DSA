/*
Question:
We are given array of 1 to N numbers eg N =6, where there will be every
nuumber from 1 to N, Except one number missing and another number 2 times
repeating in place of missing number.
So we have to retur the {repeating , missing}

eg:
Input

N=6
arr={1,2,3,4,1,6}

Output

[1,5]

*/

/*
Aprroach 1:
I will Count The sum upto n natural numbers, and also count
the sum of array.
Also i will the number which is repeating.
after that i wlll subtract the totalsum-arraysum.
i will get the missing number.

sum of 6 natural number =21
sum of array is= 17
repeating =1
missing =total-(array sum-repeating)=21-(17-1) = 5

TC: O(N)
SC: O(N)

*/

/*
Approach 2:
totalSum=21
ArraySum=17
difference=4;

missing number will always be  greater than 4

[1,2,3,4,5,2]

toalsum=21
array sum=17
repeating=2

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeating(vector<int> arr) {
    int n = arr.size();        // 6
    int sum = n * (n + 1) / 2; // 21
    unordered_map<int, int> mpp;
    int arrSum = 0;
    int repeating = 0;

    for (int m : arr) {
        arrSum += m; // 1+2+3+4+1+6 =17
        mpp[m]++;
        if (mpp[m] == 2) {
            repeating = m; // repeating=1
        }
    }

    int missing = sum - (arrSum - repeating); //=21-(17-1)=5

    cout << repeating << " " << missing;

    return {repeating, missing}; // 1,5
}
 
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    missingAndRepeating(arr);
}
