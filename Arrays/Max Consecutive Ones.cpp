// https://leetcode.com/problems/max-consecutive-ones/

// Leetcode - 485. Max Consecutive Ones

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, temp = 0;

        for (int num : nums)
        {
            if (num == 1)
            {
                temp++;
            }
            else
            {
                count = max(count, temp);
                temp = 0;
            }
        }

        return max(count, temp);
    }
};