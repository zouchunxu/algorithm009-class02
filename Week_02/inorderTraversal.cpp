#include <stack>
#include <vector>

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr)  return {};
        TreeNode * curr = root;
        stack<TreeNode*> s;
        vector<int> res;
        while(curr != nullptr || !s.empty()){
            while(curr != nullptr){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            res.push_back(curr->val);
            curr = curr->right;
        }
        return res;
    }
};
