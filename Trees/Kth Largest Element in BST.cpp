// https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

// GFG - Kth Largest Element in BST

/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
public:
    void inorderTraversal(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        inorderTraversal(root->left, ans);
        ans.push_back(root->data);
        inorderTraversal(root->right, ans);
    }

    int kthLargest(Node *root, int k)
    {
        vector<int> inorder;
        inorderTraversal(root, inorder);
        int n = inorder.size();
        int index = n - k;

        return inorder[index];
    }
};