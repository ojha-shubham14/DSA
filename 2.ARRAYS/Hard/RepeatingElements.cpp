#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    vector<int> repeating(vector<int> & nums){
        int n = nums.size();
        int repeating = -1;
        int missing = -1;
        for(int i = 1 ; i<n ; i++){
            int count=0;
            for(int j = 0; j<n; j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count>1){
                repeating = i;
            }
            else if(count == 0){
                missing = i;
            }
        }
        return {repeating,missing};
    }
};


class better{
    public:
    vector<int> repeating(vector<int> & nums){
        int n = nums.size();
        int repeating = -1;
        int missing = -1;
        map<int,int> mp;

        for(int i = 0 ; i<n ; i++){
            mp[nums[i]]++;
        }
        for(int i = 1; i<n ; i++){
            if(mp[i]>1){
                repeating = i;
            }
            if(mp[i]==0){
                missing = i;
            }
        }
        return {repeating,missing};
    }
};