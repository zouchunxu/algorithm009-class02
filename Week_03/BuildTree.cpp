#include <vector>

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0){
            return nullptr;
        }
        if(preorder.size() != inorder.size()){
            return nullptr;
        }
        TreeNode * node = new TreeNode(preorder[0]);
        int leftOffset = 0;
        vector<int> left;
        for (int i=0;i<preorder.size();i++) {
            if(inorder[i] == preorder[0]){
                leftOffset = i;
                break;
            }
            left.push_back(inorder[i]);
        }

        vector<int> right;
        for (int i=leftOffset+1;i<preorder.size();i++){
            right.push_back(inorder[i]);
        }

        vector<int> leftPre;
        vector<int> rightPre;
        for(int i=1;i<preorder.size();i++){
            if(i <= left.size()) {
                leftPre.push_back(preorder[i]);
            } else {
                rightPre.push_back(preorder[i]);
            }
        }

        node->left = buildTree(leftPre,left);
        node->right = buildTree(rightPre,right);

        return node;
    }
};
