#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution{
    public:
    vector<int> solve(TreeNode* root){
        if(root == NULL){
            return {0,0};
        }
        vector<int> left = solve(root->left);
        vector<int> right = solve(root->right);

        vector<int> dp(2,0);


        //CASE 1: don't rob current node that means we can either rob it's children or not.

        dp[0]= max(left[0],left[1]) + max(right[0],right[1]);

        //left[0] = Maximum money when left child is NOT robbed.
        //left[1] = Maximum money when left child IS robbed.
        //right[0] = Maximum money when right child is NOT robbed.
        //right[1] = Maximum money when right child IS robbed.

        //CASE 2: we can rob the current node
        dp[1] = root->val + left[0] + right [0];            //that means we can rob it's root (the current one) & can't rob the it's immidiate child but can rob the grand child and so one.

        return dp;
    }

    int rob(TreeNode* root){
        vector<int> ans = solve(root);
        return max(ans[0],ans[1]);
    }
};