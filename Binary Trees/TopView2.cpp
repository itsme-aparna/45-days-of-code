#include <iostream>
#include <queue>
#include <stack>
using namespace std;
 
// class for Tree node
class Node {
public:
    Node *left, *right;
    int data;
    Node() { left = right = 0; }
    Node(int data)
    {
        left = right = 0;
        this->data = data;
    }
};
 

 
// class for Tree
class Tree {
public:
    Node* root;
    Tree() { root = 0; }
 
    void topView()
    {
        // queue for holding nodes and their horizontal
        // distance from the root node
        queue<pair<Node*, int> > q;
 
        // pushing root node with distance 0
        q.push(make_pair(root, 0));
 
        
        int hd = 0, l = 0, r = 0;
 
       
        stack<int> left;
 
        // vector is for holding right node's data
        vector<int> right;
 
        Node* node;
 
        while (q.size()) {
 
            node = q.front().first;
            hd = q.front().second;
 
            if (hd < l) {
                left.push(node->data);
                l = hd;
            }
            else if (hd > r) {
                right.push_back(node->data);
                r = hd;
            }
 
            if (node->left) {
                q.push(make_pair(node->left, hd - 1));
            }
            if (node->right) {
                q.push(make_pair(node->right, hd + 1));
            }
 
            q.pop();
        }
        // printing the left node's data in reverse order
        while (left.size()) {
            cout << left.top() << " ";
            left.pop();
        }
 
        // then printing the root node's data
        cout << root->data << " ";
 
        // finally printing the right node's data
        for (auto x : right) {
            cout << x << " ";
        }
    }
};
 
// Driver code
int main()
{
    // Tree object
    Tree t;
    t.root = new Node(1);
    t.root->left = new Node(2);
    t.root->right = new Node(3);
    t.root->left->right = new Node(4);
    t.root->left->right->right = new Node(5);
    t.root->left->right->right->right = new Node(6);
    t.topView();
    cout << endl;
    return 0;
}