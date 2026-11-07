#include<bits/stdc++.h>
using namespace std;
class bruteforce{           //TC: O(N3) and SC:O(1)
    public:
    int maxSubArray(vector<int> &nums){
        int n = nums.size();
        int maxSum = INT_MIN;
        for(int i = 0 ; i<n; i++){
            for(int j=i; j<n; j++){
                int sum = 0;
                for(int k = i ; k<j ; k++){     //this includes the subarray from index i to j
                    sum+=nums[k];
                }
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
};