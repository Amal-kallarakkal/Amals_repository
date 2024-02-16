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
    TreeNode* searchBST(TreeNode* root, int val) {

        //   TreeNode* temp = root;

        if(root == NULL)  {
            return NULL;
        }

        if(root->val == val) {
            return root;
        } else if(root->val > val) {
            //   left subtree
           return searchBST(root->left, val);
        } else {
            //   right subtree
           return searchBST(root->right, val);
        }
         
    }
};