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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> sums;
        queue<TreeNode*> q;
        sums.push_back(root->val);
        q.push(root);
        q.push(NULL);
        long long levelSum = 0;
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node != NULL) {
                if (node->left != NULL) {
                    q.push(node->left);
                    levelSum+= node->left->val;
                }
                if (node->right != NULL) {
                    q.push(node->right);
                    levelSum+= node->right->val;
                }
            } else {
                if (!q.empty()) {
                    q.push(NULL);
                    sums.push_back(levelSum);
                    levelSum = 0; 
                }
            }
        }

        sort(sums.begin(),sums.end());
        int sz = sums.size();
        for(int x : sums ){
            cout << x << " ";
        }
        if(k>sz){
            return -1;
        }else{
            return sums[sz-k];
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

