#include<bits/stdc++.h>
using namespace std;

class bruteforce{       //TC: O(NxN!)   SC:O(1) & not to use this in to write in Interview we can just verbally say this
    public:
};

class better{           //using STL property ,recommended to use in Interview we can just say verbally
    public:
    void nextPermutation(vector<int> & nums){
        next_permutation(nums.begin(),nums.end());
    }
};

class Optimal {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for(int i = n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1; i>index; i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};