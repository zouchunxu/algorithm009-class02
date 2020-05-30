#include <vector>
#include <stack>

struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        stack<TreeNode *> s;
        vector<int> res;
        s.push(root);
        while(!s.empty()){
            auto node = s.top();
            s.pop();
            res.push_back(node->val);
            if(node->right) {
                s.push(node->right);
            }
            if(node->left){
                s.push(node->left);
            }
        }
        return res;
    }
};
