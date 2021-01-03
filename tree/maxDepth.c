/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    
    if (root == NULL) return 0;
    
    int l,r,h;
    
    l = maxDepth(root->left);    
    r = maxDepth(root->right);
    
    h = (l>r)?l :r;
    
    return h+1;
    

}