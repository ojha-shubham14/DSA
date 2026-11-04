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

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size();
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<n-3 ; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1 ; j<n-2 ; j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = (long long) nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum>(long long) target){
                        l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        answer.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;

                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return answer;
    }
};