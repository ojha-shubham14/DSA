#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    vector<vector<int>> ThreeSum(vector<int> &nums){
        int n = nums.size();
        set<vector<int>> answer;        //using to store unique vectors which are selected as solution
        for(int i = 0; i<n; i++){
            for(int j =i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if((nums[i]+nums[j]+nums[k])==0){
                        vector<int> temp = {nums[i],nums[j],nums[k]};       //storing the solution temporarily in temp vector
                        sort(temp.begin(),temp.end());      //sorting so that it would be easy to identify that it is unique or repeated
                        answer.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(answer.begin(),answer.end());        //converting set to vector<vector<int>>
    }
};


int main(){
    vector<int> nums = {1,2,3,4,5,-2,-1,-1,6,-5};
    bruteforce obj;
    vector<vector<int>> answer = obj.ThreeSum(nums);
    cout<<"elements selected are:"<<endl;
    for(auto a : answer){
        for(auto b : a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}