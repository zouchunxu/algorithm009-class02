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
    vector<int> preorder(Node* root) {
        if(root == nullptr) return {};
        stack<Node*> s;
        s.push(root);
        vector<int> res;
        while(!s.empty()){
            auto node = s.top();
            s.pop();
            res.push_back(node->val);

            for(int i=node->children.size()-1;i>=0;i--){
                s.push(node->children[i]);
            }
        }
        return res;
    }
};
