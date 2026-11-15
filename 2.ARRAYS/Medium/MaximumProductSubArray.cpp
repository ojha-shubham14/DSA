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

class better{
    public:
    int MaxSubArray(vector<int> & nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n ; i++){
            int product = 1;
            for(int j = i ; j<n ; j++){
                    product *= nums[j];
                maxi = max(maxi,product);
            }
        }
        return maxi;
    }
};

class Optimal{      //we will try to reduce the TC to O(n) here
    public:
    long long MaxProduct(vector<int> & nums){
        int n = nums.size();
        long long product = 1;          //product should always be initialised to 1 and Sum should be initialised to 0
        long long maxi = LLONG_MIN;     //the smallest possible minimum in LONG that is smaller than 0 too.

        //here is our plan to iterate from left to right and right to left because 
        /* nums = { -2, 3, -4, -5 }
        Left to right:
        -2, -6, 24, -120
        Right to left:
        -5, 20, 60, -120
        The maximum is 60 */

        //left to right traversal 

        for(int i =0; i<n; i++){
            product *= nums[i];
            maxi = max(maxi,product);

            if(product==0){
                product = 1;
            }
        }


        //right to left traversal

        product = 1;
        for(int i = n-1; i>=0; i--){
            product *= nums[i];
            maxi = max(product,maxi);

            if(product==0){
                product=1;
            }
        }
        return maxi;
    }
};