// https://www.geeksforgeeks.org/problems/non-repeating-element3958/1

// GFG - Non Repeating Element

class Solution
{
public:
    int firstNonRepeating(vector<int> &arr)
    {
        // Complete the function
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }

        for (auto itr : arr)
        {
            if (mp[itr] == 1)
            {
                return itr;
            }
        }

        return 0;
    }
};