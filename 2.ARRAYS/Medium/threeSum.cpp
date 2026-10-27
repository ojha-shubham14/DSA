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


class better{
    public:
    vector<vector<int>> ThreeSum(vector<int> & nums){
        int n = nums.size();
        set<vector<int>> answer;
        for(int i = 0 ; i<n; i++){
            unordered_set<int> checkInThis;
            for(int j = i+1; j<n; j++){
                int third = -(nums[i]+nums[j]);     //third will be of opposite sign and that too the summation of these two
                if(checkInThis.find(third) != checkInThis.end()){          //that means it is there in checkInThis
                    vector<int> temp = {nums[i],nums[j],third};     //to store the vector for temporatily
                    sort(temp.begin(),temp.end());
                    answer.insert(temp);            //insert the sorted temp into the answer set
                }
            }
        }
        return vector<vector<int>>(answer.begin(),answer.end());            //converting the set to vector<vector<int>> form
    }
};


class optimal{
    public:
    vector<vector<int>> triplet(vector<int> &nums){
        vector<vector<int>> answer;         //for storing final selected triplets
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<n ; i++){
            int j = i+1;
            int k = n-1;
            while(j<k){             //j should be always less than k, because if they crosses each other then won't be able to make the solutionn
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;            //k is in the last index so usko piche lana hoto to make sum == 0
                }
                else if (sum>0){
                    j++;            //j position to be increased because to make overall sum as 0
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};       //then this is definitely  == 0 so store them
                    answer.push_back(temp);
                    j++;        //j will be increased to next to get if more triplets == 0 
                    k--;        // i will be decreased to get the more triplets == 0
                    while(j<k && nums[j]==nums[j-1]){       //if previous and the next j position values are same then no need to check again as we have checked with all the possibilities witth that value
                        j++;            //move j to next
                    }
                    while(j<k && nums[k] == nums[k+1]){     //same goes here
                        k--;            //move k to next
                    }
                }
            }
            
        }
        return answer;
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


    cout<<"Better Solution:";
    vector<int> nums1 = {1,2,3,4,5,-2,-1,-1,6,-5};
    better obj1;
    vector<vector<int>> answer1 = obj.ThreeSum(nums);
    cout<<"elements selected are:"<<endl;
    for(auto a : answer1){
        for(auto b : a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}