#include <vector>
#include <queue>

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
    vector<vector<int>> levelOrder(Node* root) {
       if(root == nullptr) return {};
       queue<Node *> q;
       vector<vector<int>> res;
       q.push(root);
       while(!q.empty()){
           vector<int> tmp;
           int tmpSize = q.size();
           for(int i=0;i<tmpSize;i++){
               auto node = q.front();
               q.pop();
               tmp.push_back(node->val);
               for(auto cn:node->children) {
                   if(cn){
                       q.push(cn);
                   }
               }
           }
           res.push_back(tmp);
       }
       return res;
    }
};
