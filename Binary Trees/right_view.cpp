#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int data){
        this->data;
        this->left= this->right= NULL;

    }
};

void rightView(Node* root){
    if(!root)
        return;
    queue<Node*> q;
     q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 1; i<=n; i++){
            Node* temp = q.front();
            q.pop();
            if (i == n)
                cout<<temp->data<<" ";
              
            // Add left node to queue
            if (temp->left != NULL)
                q.push(temp->left);
  
            // Add right node to queue
            if (temp->right != NULL)
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
 
    rightView(root);
}