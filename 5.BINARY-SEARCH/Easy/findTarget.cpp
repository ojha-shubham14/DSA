#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    int search(vector<int> &nums , int target){     //sorted array me se we have to return the index of the target
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;          //if target not in the array 
    }
};