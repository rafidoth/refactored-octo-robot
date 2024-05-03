#include<bits/stdc++.h> 
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node* ROOT = NULL;

Node* insertNode(Node* r, int val){
    if(r == NULL){
        return new Node(val);
    }

    if(val > r->data){
        r->right = insertNode(r->right,val);
    }else{
        r->left = insertNode(r->left,val);
    }
    return r;
}

Node* search(Node* r,int t){
    if(r == NULL){
        return NULL;
    }else{
        if(t==r->data){
            return r;
        }

        if(t < r->data){
            return search(r->left, t);
        }
        
        return search(r->right,t);
    }
}



int findMin(Node* root){
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    return findMin(root->left);
}


Node* deleteNode(Node* root, int value){
    if(root==NULL) return NULL;
    if(value < root->data){
        root->left = deleteNode(root->left,value);
    }else if(value > root->data){
        root-> right = deleteNode(root->right,value);
    }else{
        if(root->left == NULL && root ->right == NULL){
            delete root;
            root = NULL;
        }else if(root ->left == NULL){
            Node* temp = root;
            delete temp;
            root = root->right;
        }else if(root->right == NULL){
            Node* temp = root;
            delete temp;
            root = root->left;
        }else{
            root->data = findMin(root->right);
            root->right = deleteNode(root->right, root->data);
        }
        
    }
    return root;
}


void inorder(Node* r){
    if(r!=NULL){
        inorder(r->left);
        cout << r->data << " ";
        inorder(r->right);
    }
}






int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {12,5,3,7,1,9,15,13,17,14,16,19,18,20};
    for(int x :v){
        ROOT = insertNode(ROOT,x);
    }
    inorder(ROOT);
    cout << endl;
    // deleteNode(ROOT,15);
    deleteNode(ROOT,7);
    inorder(ROOT);
    
}

