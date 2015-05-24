/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <stddef.h>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    bool isMirrored(TreeNode* left, TreeNode* right){
		if(left == NULL || right == NULL){
        	return left == NULL && right == NULL;
        } else {
            return ( left->val == right->val && isMirrored(left->left, right->right) && isMirrored(left->right, right->left));
        }
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        if( (root->left == NULL) || (root->right == NULL)){
	        return (root->left == NULL) && (root->right == NULL);
        }else{
        	return isMirrored(root->left, root->right);
        }
    }
};
