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


class optimal{
    public:
    vector<int> topElements(vector<int> & nums , int k){
        int n = nums.size();

        //creating map to store the frequency of each elements
        unordered_map<int,int> mapp;
        for(auto it: nums){
            mapp[it]++;
        }

        //now add these to the minHeap that is priorityQueue in order {frequency,value}
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minHeap;
        for(auto it: mapp){
            minHeap.push({it.second,it.first});

            //if minHeap size is increased more than K then pop the top (the top contains the minimum value i.e, min frequency one element)
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        //now extract the sorted form of the elements into the result vector
        vector<int> answer;
        while(!minHeap.empty()){
            answer.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return answer;
    }
};