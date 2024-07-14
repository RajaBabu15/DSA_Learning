#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* &root){
    queue<Node *>q;
    q.push(root);
    
    while(!q.empty()){
        Node *tmp=q.front();
        q.pop();
        cout<<tmp->data<<" ";
        if(tmp->left!=NULL){
            q.push(tmp->left);
        }
        if(tmp->right!=NULL){
            q.push(tmp->right);
        }
    }
}
void preorder(Node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Level Order traversal of binary tree is \n";
    levelOrderTraversal(root);
    
    return 0;
}

