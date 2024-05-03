#include<bits/stdc++.h> 
using namespace std;


struct Node  {
    int data;
    Node* left = NULL;
    Node* right = NULL;
};


Node* createNode(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int search (int arr[], int key,int s,int e){
    for(int i=s; i<=e; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}
void postorderPrint(Node* root){
    if(root!= NULL){
        postorderPrint(root->left);
        postorderPrint(root->right);
        cout << root->data << " ";
    }
}


// building tree from pre and inorder array 
Node* buildTreePI(int pre[],int in[], int s, int e){
    if(s>e){
        return NULL;
    }
    static int i = 0;
    int curr = pre[i];
    i++;
    Node* newNode = createNode(curr);
    if(s==e) return newNode;
    int pos = search(in,curr,s,e);
    newNode->left = buildTreePI(pre,in,s, pos-1);
    newNode->right = buildTreePI(pre,in,pos+1,e);
    return newNode; 
}

// building tree from post and inorder array 
Node* buildTreePost(int post[],int sz,int in[], int s, int e){
    if(s>e){
        return NULL;
    }
    static int i = sz-1;
    int curr = post[i];
    i--;
    Node* newNode = createNode(curr);
    if(s==e) return newNode;
    int pos = search(in,curr,s,e);
    newNode->right = buildTreePost(post,sz,in,pos+1,e);
    newNode->left = buildTreePost(post,sz,in,s, pos-1);
    return newNode; 
}

int main(){
    int preorder[] = {1,2,4,5,3,6,7};
    int inorder[] = {4,2,5,1,6,3,7};
    Node* root = buildTreePI(preorder,inorder, 0,6);
    postorderPrint(root);
    int postorder[] = {4,5,2,6,7,3,1};
    cout << endl;
    Node* root2 = buildTreePost(postorder,7,inorder,0,6);
    postorderPrint(root2);

}