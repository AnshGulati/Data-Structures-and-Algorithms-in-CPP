// https://leetcode.com/problems/intersection-of-two-arrays-ii/

// Leetcode - 350. Intersection of Two Array - II

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        vector<int> result;

        for (int num : nums1)
        {
            mp[num]++;
        }

        for (int num : nums2)
        {
            if (mp[num] > 0)
            {
                result.push_back(num);
                mp[num]--;
            }
        }

        return result;
    }
};