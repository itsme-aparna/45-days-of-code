#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left, *right;

    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void inorderIterative(Node* root){
    stack<Node*> stack;
    Node* curr = root;
    while(!stack.empty() || curr!=nullptr){
        if(curr!=nullptr){
            stack.push(curr);
            curr = curr->left;

        }
        else{
            curr = stack.top();
            stack.pop();
            cout<<curr->data<<" ";

            curr = curr->right;
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    inorderIterative(root);
 
    return 0;
}