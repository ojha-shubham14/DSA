#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i =0 ; i<n-3; i++){
            for(int j = i+1; j<n ; j++){
                unordered_set<long long> stt;
                for(int k = j+1; k<n; k++){
                    long long sum = (long long) nums[i]+nums[j]+nums[k];
                    long long fourth = (long long) target - sum;
                    if(stt.find(fourth)!= stt.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    stt.insert(nums[k]);      //when if condition fails that is when it is not in the unordered set

                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};