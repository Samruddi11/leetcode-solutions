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
    vector<vector<int>>answer;
    vector<int>path;
    void solve(TreeNode* root, long long targetSum){
        if(root==NULL) return ;
        path.push_back(root->val);
        if(targetSum==root->val){
            ans++;
        }
        solve(root->left,targetSum-root->val);
        solve(root->right,targetSum-root->val);
        path.pop_back();

    }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root==NULL) return 0;
        solve(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return ans;
    }
};