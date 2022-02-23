/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*,Node*> map;
        queue<Node*> q;
        q.push(node);
        map[node] = new Node(node->val, {});
        
        while(!q.empty()){
            Node *cur = q.front();
            q.pop();
            for(auto &child : cur->neighbors){
                if(map.count(child) == 0){
                    q.push(child);
                    map[child] = new Node(child->val, {});
                }
                map[cur]->neighbors.push_back(map[child]);
            }
        }
        return map[node];
    }
};