/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int ans=0;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        int leftp=0;
        int rightp=0;
        if(root->left!=NULL && root->left->val==root->val) leftp=left+1;
        if(root->right!=NULL && root->right->val==root->val) rightp=right+1;
        ans=max(ans,leftp+rightp);
        return max(leftp,rightp);
    } 
    int longestUnivaluePath(TreeNode* root) {
        solve(root);
        return ans;
    }
};