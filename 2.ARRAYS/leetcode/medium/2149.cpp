#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int posIndx = 0;
        int NegIndx = 1;
        for(int i = 0; i<n; i++){
            if(nums[i]<0){
                res[NegIndx]= nums[i];
                NegIndx +=2;
            }
            else{
                res[posIndx] = nums[i];
                posIndx +=2;
            }

        }
        return res;
    }
};