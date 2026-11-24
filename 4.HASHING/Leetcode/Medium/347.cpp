#include<bits/stdc++.h>
using namespace std;

class Better{
    public:
    vector<int> topElements(vector<int> & nums, int k){
        int n = nums.size();
        vector<int> answer;
        unordered_map<int,int> mapp;
        vector<pair<int,int>> auxillary;

        //putting the element and their frequency in mapp
        for(auto it: nums){
            mapp[it]++;
        }

        //putting in auxillary vector with it.second as first int and it.first as second int
        for(auto it: mapp){
            auxillary.push_back({it.second,it.first});
        }

        sort(auxillary.rbegin(),auxillary.rend());

        //adding the top k elements to the answer vector

        for(int i=0; i<k; i++){
            answer.push_back(auxillary[i].second);
        }

        return answer;
    }
};