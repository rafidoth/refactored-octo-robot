#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right; 
};

Node* createNode(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(Node* root){
    if(root!= NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root){
    if(root!= NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void inorder(Node* root){
    if(root!= NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}



int main(){
    Node* root = NULL ;
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    
}
