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


class optimal{
    public:
    vector<int> leadersInArray(vector<int> & nums){
        int n = nums.size();
        int maxi = INT_MIN;
        vector<int> res ;
        
        for(int i=n-1; i>=0; i--){
            if(nums[i]>maxi){
                res.push_back(nums[i]);
            }
            maxi = max(nums[i],maxi);
        }
        return res;
    }
}; 
int main(){
    cout<<"Using Bruteforce:"<<endl;
    vector<int> nums = {1,2,5,3,1,2};
    bruteforce object;
    vector<int> res =object.Leader(nums);
    for(auto a : res){
        cout<<a<<" ";
    }
    cout<<endl;

    cout<<"Using optimal: "<<endl;
    optimal obj;
    vector<int> nums1 = {5,2,1,3};
    vector<int> res1 = obj.leadersInArray(nums1);
    for(auto a : res1){
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;
}