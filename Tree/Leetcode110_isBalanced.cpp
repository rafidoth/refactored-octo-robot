#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int getHeight(TreeNode* root){
        if(root==NULL){
            return -1;
        }
        int LH = getHeight(root->left);
        int RH = getHeight(root->right);

        return max(LH,RH)+1;

    }

    bool isBalanced(TreeNode* root) {
        if(root== NULL) return NULL;
        int LeftHeight = getHeight(root->left);
        int RightHeight = getHeight(root->right);
        if(abs(LeftHeight-RightHeight)>1) return false;
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        if(!left || !right){
            return false;
        }
        return true;
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

