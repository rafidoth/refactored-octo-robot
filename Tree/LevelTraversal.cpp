
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


void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            cout << node->data << " ";
            if(node->left != NULL) {
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }else{
            if(!q.empty()){
                q.push(NULL);
            }
        }
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
    levelOrderTraversal(root);
}