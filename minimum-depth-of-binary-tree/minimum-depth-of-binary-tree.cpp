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
    int depth=INT_MAX;

    void check(TreeNode* root,int i){

        if(root==NULL) return;

        if(root->right==NULL && root->left==NULL){ depth=min(depth,i); return;}
        check(root->right,i+1);
        check(root->left,i+1);

    }
    int minDepth(TreeNode* root) {

        ios_base::sync_with_stdio(false);
        if(root==NULL)return 0;
        check(root,1);

        return depth;
    }
};