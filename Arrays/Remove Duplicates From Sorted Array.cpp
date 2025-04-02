// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// Leetcode - 26. Remove Duplicates From Sorted Array

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        vector<int> unique_nums(s.begin(), s.end());
        nums = unique_nums;

        return nums.size();
    }
};