// https://leetcode.com/problems/move-zeroes/

// Leetcode - 283. Move Zeroes

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> temp;
        for (auto itr : nums)
        {
            if (itr != 0)
            {
                temp.push_back(itr);
            }
        }

        for (int i = temp.size(); i < nums.size(); i++)
        {
            temp.push_back(0);
        }

        nums = temp;
    }
};