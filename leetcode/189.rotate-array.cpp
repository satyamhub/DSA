/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void reverseArray(vector<int>& nums,int start , int end) {
        int p1 = start;
        int p2 = end;
        while (p1 < p2) {
            swap(nums[p1], nums[p2]);
            p1++;
            p2--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        
        reverseArray(nums, n-k, n - 1);
        reverseArray(nums, 0, n - k-1);
        reverseArray(nums, 0, n - 1);
    }
};
// @lc code=end

