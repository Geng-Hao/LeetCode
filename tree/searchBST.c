

/*

Given the tree:
        4
       / \
      2   7
     / \
    1   3

And the value to search: 2
You should return this subtree:

      2     
     / \   
    1   3

*/




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



struct TreeNode* searchBST(struct TreeNode* root, int val){
        
    
    if (root == NULL) return NULL;
    
    
    
    if( val < root->val) 
        return searchBST(root->left, val);
    else if( val > root->val)
        return searchBST(root->right, val);
    else
        return root;
    
} 


/* struct TreeNode* searchBST(struct TreeNode* root, int val) {
        
        while(root != NULL && root->val != val){
            if(val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return root;
    } 
*/