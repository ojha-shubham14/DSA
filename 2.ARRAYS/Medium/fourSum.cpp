#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<n ; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    for(int l = k+1; l<n; l++){
                        long long sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum == target){
                            st.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};

class better{
    public:
    vector<vector<int>> fourSum(vector<int> & nums , int target){
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0 ; i<n-3; i++){
            for(int j = 0 ; j<n-2; j++){
                unordered_set<long long> stt;
                for(int k =0 ; k<n-1; k++){
                    long long sum = (long long)nums[i]+nums[j]+nums[k];
                    long long fourth = (long long) target - sum;
                    if(stt.find(fourth) != stt.end() ){
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};