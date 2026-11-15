#include<bits/stdc++.h>
using namespace std;

class BetterSolution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++) {
            int product = 1;
            for(int j = i; j < n; j++) {
                product *= nums[j];
                maxi = max(maxi, product);
            }
        }
        return maxi;
    }
};

class OptimalSolution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long maxi = LLONG_MIN;
        long long product = 1;

        //left to right traversal
        for(int i = 0; i<n; i++){
            product*=nums[i];
            maxi = max(maxi,product);
            
            if(product==0){
                product=1;
            }
        }

        //right to left traversal
        product = 1;
        
        for(int i = n-1; i>=0; i--){
            product*=nums[i];
            maxi = max(maxi,product);
            
            if(product==0){
                product=1;
            }
        }
        return maxi;
    }
};