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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<TreeNode*>x;
        x.push(root);

        vector<vector<int>> ans;

    while(!x.empty()){
        int size = x.size();
        vector<int> level;

        while(size--){

        TreeNode* frontnode = x.front();
        x.pop();

        level.push_back(frontnode->val);

        if(frontnode->left)
        x.push(frontnode->left);
        
        if(frontnode->right)
        x.push(frontnode->right);

    }
    ans.push_back(level);
    }
    return ans;
    }
};