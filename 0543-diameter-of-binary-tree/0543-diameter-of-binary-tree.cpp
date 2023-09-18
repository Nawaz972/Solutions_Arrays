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
    
    pair<int, int> check(TreeNode* root)
    {
        if(root == NULL)
        {
            pair<int, int> p;
            p.first = 0;
            p.second = 0;
            return p;
        }
        
        pair<int, int> la = check(root -> left);
        pair<int, int> ra = check(root -> right);
        
        
        int lh = la.first;
        int ld = la.second;
        int rh = ra.first;
        int rd = ra.second;
        
        int height = 1 + max(lh, rh);
        int diam = max(lh + rh, max(ld, rd));
        
        pair<int, int> ans;
        
        ans.first = height;
        ans.second = diam;
        
        return ans;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        return check(root).second;
    }
};