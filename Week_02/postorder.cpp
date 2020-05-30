#include <vector>
#include <stack>

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(root == nullptr)  return {};
        stack<Node *> s;
        vector<int> res;
        s.push(root);
        while(!s.empty()){
            auto node = s.top();
            s.pop();
            res.push_back(node->val);
            for(auto c:node->children){
                if(c){
                    s.push(c);
                }
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
