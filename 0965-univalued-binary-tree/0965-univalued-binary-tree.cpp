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
    
    void check(TreeNode* root, bool &flag, int temp)
    {
        if(root == NULL)    return;
        
        if(root -> val != temp) 
        {
            flag = false;
            return;
        }
        
        check(root -> left, flag, temp);
        check(root -> right, flag, temp);
    }
    
    bool isUnivalTree(TreeNode* root) {
        int temp = root -> val;
        bool flag = true;
        check(root, flag, temp);
        return flag;
    }
};