// https://leetcode.com/problems/intersection-of-two-arrays/

// Leetcode - 349. Intersection of Two Array

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> result;

        for (auto itr : nums2)
        {
            if (s.find(itr) != s.end())
            {
                // Found
                s.erase(itr);
                result.push_back(itr);
            }
        }

        return result;
    }
};