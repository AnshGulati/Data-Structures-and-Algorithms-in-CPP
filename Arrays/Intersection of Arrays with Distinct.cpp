// GFG - Intersection of Arrays with Distinct

// https://www.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

class Solution
{
public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b)
    {
        int count = 0;
        unordered_map<int, int> mp;

        for (auto itr : a)
        {
            mp[itr]++;
        }

        for (auto itr : b)
        {
            mp[itr]++;
        }

        for (auto itr : mp)
        {
            if (itr.second >= 2)
            {
                count++;
            }
        }
        return count;
    }
};