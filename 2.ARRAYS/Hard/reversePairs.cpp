#include<bits/stdc++.h>
using namespace std;

class Bruteforce{       //TC: O(N2) & SC: O(1)
    public:
    int reversePairs(vector<int> & nums){
        int n = nums.size();
        int count  = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = i+1; j<n; j++){
                if(nums[i]> 2LL* nums[j]){
                    count ++;
                }
            }
        }
        return count;
    }
};

