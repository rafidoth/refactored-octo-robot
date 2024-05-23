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



int inOrder(TreeNode* root,int sum){
	if(root!=NULL){
		sum = inOrder(root->left,sum);
		sum+= root->val;
		sum = inOrder(root->right,sum);
	}
	return sum;
}


int main(){
	TreeNode* root = createNode(5);
	root->left = createNode(15);
	root->right = createNode(30);
	root->left->left = createNode(12);
	root->left->right = createNode(8);
	root->right->left = createNode(40);
	root->right->right = createNode(50);
	
	cout<< inOrder(root,0) << "\n";
}
