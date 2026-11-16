#include<bits/stdc++.h>
using namespace std;

//definition of the tree we have to create first and also the constructor

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};


class BruteforceSolution{       //TC: 0(N log N)-----> log n for traversal and sorting & sorting n elements and SC:O(N)
    public:
    int kthSmallest(TreeNode*root, int k){
        vector<int> arr;
        //store all the BST elements
        inorder(root,arr);

        //sort the elements
        sort(arr.begin(),arr.end());

        //to get the kth smallest value
        return arr[k-1];        //k-1 because vectors uses 0 based indexing aand we want Kth smallest element
    }

    void inorder(TreeNode*root, vector<int> &arr){          //inorder Traversal : left->root->right
        if(root == NULL) return;

        //left side of the tree traversal
        inorder(root->left,arr);

        arr.push_back(root->val);
        
        //righside tree traversal
        inorder(root->right, arr);
    }
};



class BetterSolution{           //inorder already sorts in ascending order so no need to sort it again
    public:
    int kthSmallest(TreeNode* root, int k){         //TC:O(N) iterating each elements and the SC: O(N)
        vector<int> nums;

        inorder(root,nums);

        return nums[k-1];
    }

    void inorder(TreeNode* root, vector<int> & nums){
        if(root==NULL) return;

        inorder(root->left,nums);

        nums.push_back(root->val);

        inorder(root->right, nums);
    }
};


class OptimalSolution{
    public:
    int count =0 ;
    int ans = -1;
    int kthSmallest(TreeNode* root , int k){
        inorder(root,k);
        return ans;
    }
    void inorder(TreeNode* root , int k){
        if(root==NULL) return;
        //visit left subtree
        inorder(root->left,k);

        // Stop if kth element is already found
        if(count >= k) return;

            //visit current node
            count++;
        //visit the root
        if(count==k){
            ans=root->val;
            return;
        }
        //visit right subtree
        inorder(root->right,k);
    }
};