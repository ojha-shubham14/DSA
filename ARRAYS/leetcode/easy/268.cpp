#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n*(n+1)/2;
        int sum_obtained = 0;
        for(int i = 0 ; i<n; i++){
            sum_obtained+=nums[i];
        }
            
    
        int difference = expected_sum-sum_obtained;
        return difference;
    }
};