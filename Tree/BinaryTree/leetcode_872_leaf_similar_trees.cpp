/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> sequence1;
        leafSequence(root1,sequence1);
        vector<int> sequence2;
        leafSequence(root2,sequence2);
        if(sequence1.size()!= sequence2.size()) return false;
        for(int i = 0;i<(int)sequence1.size() && i< (int)sequence2.size();i++){
            if(sequence1[i]!=sequence2[i]){
                return false;
            }
        }
        return true;
    }


    vector<int> leafSequence(TreeNode* root, vector<int>& seq){
        if(root!=NULL){
            seq = leafSequence(root->left,seq);
            if(root->left == NULL && root -> right == NULL){
                seq.push_back(root->val);
            }
            seq = leafSequence(root->right,seq);
        }
        return seq;
    }
};
