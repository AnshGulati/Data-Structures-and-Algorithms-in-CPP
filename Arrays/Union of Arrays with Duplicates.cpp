// GFG - Union of Arrays with Duplicates

// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int> &a, vector<int> &b)
    {
        set<int> s;

        for (auto itr : a)
        {
            s.insert(itr);
        }

        for (auto itr : b)
        {
            s.insert(itr);
        }

        return s.size();
    }
};