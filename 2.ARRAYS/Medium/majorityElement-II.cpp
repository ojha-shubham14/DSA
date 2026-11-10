#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    vector<int> MajorityElement(vector<int> & nums){
        int n = nums.size();
        vector<int> answer;
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n ; j++){
                if(nums[i]== nums[j]){
                    count ++;
                }
                
            }
            if(count>(n/3)){
                if(find(answer.begin(), answer.end(), nums[i]) == answer.end()){        //this checks the entire Answer vector and only inserts if the element is not there
                    answer.push_back(nums[i]);
                }               
            }
        }
        return answer;
    }
};


class better{
    public:
    vector<int> majorityElements(vector<int> & nums){
        vector<int> answer;
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){     //using 2 for loops in better appraoch
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second > (n/3) && find(answer.begin(),answer.end(),i.first)== answer.end()){
                answer.push_back(i.first);
            }
        }
        return answer;
    }
};

class Better_Optimised{
    public:
    vector<int> Majority(vector<int> & nums){
        int n = nums.size();
        vector<int> answer;
        map<int,int> mp;
        int min_occurences = (n/3)+1;       //minimum occurences to be the majority element
        for(int i = 0 ; i<n ; i++){         //using only one forloop
            mp[nums[i]]++;
            if(mp[nums[i]]>=min_occurences && find(answer.begin(),answer.end(),nums[i])==answer.end()){     //checking if the occurences are more than minimum occurences and the element is present or not in the answer vector
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};