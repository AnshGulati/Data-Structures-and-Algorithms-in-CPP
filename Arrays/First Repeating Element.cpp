// https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

// GFG - First Repeating Element

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr)
    {

        unordered_map<int, int> mp;

        for (auto itr : arr)
        {
            mp[itr]++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (mp[arr[i]] >= 2)
            {
                return i + 1;
            }
        }

        return -1;
    }
};