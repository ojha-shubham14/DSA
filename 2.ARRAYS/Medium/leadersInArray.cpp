#include<bits/stdc++.h>
using namespace std;
class bruteforce{
    public:
        vector<int> Leader(vector<int>& nums){
            int n = nums.size();
            vector<int> leaders;
            for(int i =0; i<n; i++){
                bool isleaders = true;
                for(int j = i+1;j<n;j++){
                    if(nums[i]<nums[j]){
                        isleaders = false;
                        break;
                    }   
                }
                if(isleaders == true){
                    leaders.push_back(nums[i]);
                }
            }
            return leaders; 
        }
};

int main(){
    vector<int> nums = {1,2,5,3,1,2};
    bruteforce object;
    vector<int> res =object.Leader(nums);
    for(auto a : res){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}