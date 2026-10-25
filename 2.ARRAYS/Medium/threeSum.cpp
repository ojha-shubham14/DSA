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