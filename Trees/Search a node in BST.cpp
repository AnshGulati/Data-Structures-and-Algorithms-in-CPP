// GFG - Search a node in BST

// https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

bool search(Node* root, int x) {
    //base case
    if(root == NULL) {
        return false;
    }
        
    if(x == root->data) {
        return true;
    }
        
    else if(x < root->data) {
        search(root->left, x);
    }
    
    else if(x > root->data) {
        search(root->right, x);
    }
}