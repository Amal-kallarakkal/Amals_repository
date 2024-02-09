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
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        TreeNode* prev;

        while(curr != NULL) {
            if(curr->left != NULL) {
                //go to the rightmost node of the left subtree
                prev = curr->left;
                while(prev->right) {
                    prev = prev->right;
                }
                prev->right = curr->right;

                curr->right = curr->left;
                curr->left = NULL;

            } else {
                curr = curr->right;
            }
        }

        
    }
};