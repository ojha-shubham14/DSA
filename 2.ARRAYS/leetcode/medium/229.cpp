#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> majorityElements(vector<int> & nums){
        int n = nums.size();
        vector<int> answer;
        map<int,int> mp;
        int minimum_occurrences = (n/3)+1;

        for(int i = 0 ; i<n ; i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>=minimum_occurrences && find(answer.begin(),answer.end(),nums[i])==answer.end()){
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};