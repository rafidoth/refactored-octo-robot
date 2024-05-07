#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

struct TreeNode{

};

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        int depthX = findDepth(root,x);
        int depthY = findDepth(root,y);
        TreeNode* parentX = findParent(root,x);
        TreeNode* parentY = findParent(root,y);
        return (parentX!=ParentY)&&(depthX==depthY);
    }

    TreeNode* findParent(TreeNode* root, int x){
        if(root == NULL){
            return NULL;
        }

        if(root->left!=NULL && root->left->val == x){
            return root;
        }
        if(root->right!=NULL && root->right->val ==x){
            return root;
        }

        
        TreeNode* leftParent = findParent(root->left,x);
        TreeNode* rightParent = findParent(root->right,x);

        if(leftParent!=NULL) return leftParent;
        if (rightParent!=NULL) return rightParent;

        return NULL;
    }

    void findDepth(Node* root, int x){
        if(root == NULL){
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int depth = -1;
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node->data == x){
                return depth+1;
            }
            if(node!=NULL){
                // cout << node->data << " ";
                if(node->left != NULL) {
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }else{
                if(!q.empty()){
                    depth++;
                    q.push(NULL);
                }
            }
        }
    }
};


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Solution solution;
    solution.test("hello world");

}

