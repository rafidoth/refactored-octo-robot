#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* createNode(int value){
	TreeNode* newNode = new TreeNode;
	newNode->val = value;
	newNode->left = NULL;
	newNode->right = NULL;
	string str = "sdsa";
	return newNode;
}



void preOrder(TreeNode* root){
	if(root!=NULL){
		cout << root->val << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}


void inOrder(TreeNode* root){
	if(root!=NULL){
		inOrder(root->left);
		cout << root->val << " ";
		inOrder(root->right);
	}
}

void postOrder(TreeNode* root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout << root->val<< " ";
	}
}



int main(){
	TreeNode* root = createNode(5);
	root->left = createNode(15);
	root->right = createNode(30);
	root->left->left = createNode(12);
	root->left->right = createNode(8);
	root->right->left = createNode(40);
	root->right->right = createNode(50);
	inOrder(root);
	cout << "\n";
}
