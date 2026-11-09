#include<bits/stdc++>
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
                if(answer.size()==0 || answer[0]!=nums[j]){
                    answer.push_back(nums[j]);
                }
            }
        }
    }
    return answer;
};