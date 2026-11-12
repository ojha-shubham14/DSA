#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    int MaxSubArray(vector<int> & nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n ; i++){
            for(int j = i ; j<n ; j++){
                int product = 1;
                for(int k = i; k<=j; k++){
                    product *= nums[k];
                }
                maxi = max(maxi,product);
            }
        }
        return maxi;
    }
};
