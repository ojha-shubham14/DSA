#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        int start = 0;
        int end = n-1;
        for(int start = 0, end = n-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }

         for(int start = 0, end = k-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }

        for(int start = k, end = n-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }
        
    }
};