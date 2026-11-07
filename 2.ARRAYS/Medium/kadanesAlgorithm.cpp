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
                for(int k = i ; k<=j ; k++){     //this includes the subarray from index i to j
                    sum+=nums[k];
                }
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
};


class Better{           //TC: 0(N2) and SC: O(1)
    public:
    int maxSubArray(vector<int> &nums){
        int n = nums.size();
        int maxSum = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            int sum = 0 ;
            for(int j = i ; j<n; j++){
                sum += nums[j];
            }
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};



class Optimal{              //TC: O(N) & SC: O(1)
    public:
    long long maxSubArray(vector<int> &nums){
        int n = nums.size();
        long long sum = 0;
        long long maxSum = LLONG_MIN;
        for(int i = 0 ; i<n ; i++){
            sum += (long long) nums[i];
            maxSum = max(maxSum,sum);
            
            if(sum<0){
                sum = 0;
            }
        }
        return maxSum;
    }
};