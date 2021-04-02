#include <iostream>
#include <stack>
#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
   Node *left, *right;

   Node(int data){ 
       this->data = data;
       this->left = this->right = nullptr;

}
};

void printLeftView(Node* root){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i = 1; i<=n; i++){
            Node* temp = q.front();
            q.pop();
            if(i==1)
               cout<<temp->data<<" ";
            if(temp->left != NULL)
               q.push(temp->left);
            if(temp->right!=NULL)
               q.push(temp->right);

        }

    }
}
int main()
{
    // Let's construct the tree as
    // shown in example
 
    Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right->left = new Node(14);
 
    printLeftView(root);
}