#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> answer(n);
        answer[0] = 1;
        int rightSuffix = 1;

        //filling left prefix of nums
        for(int i = 1; i<n; i++){           //i = 1 because we have already solved for left[0];
            answer[i] = answer[i-1] * nums[i-1];
        }

        for (int i = n-1; i>=0; i--){
            answer[i] = answer[i] * rightSuffix;
            rightSuffix *= nums[i];
        }

        return answer;
    }
};