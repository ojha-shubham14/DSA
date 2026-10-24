#include<bits/stdc++.h>
using namespace std;
class Bruteforce{
    public:
    vector<int> twosum(vector<int> & nums, int target){
        int n = nums.size();
        for(int i= 0 ; i<n ; i++){
            for(int j = i+1; j<n ; j++){
                if(nums[i]+ nums[j] == target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};



int main(){
    Bruteforce obj;
    vector<int> v = {1,2,3,6,4,-3};
    int t;
    cout<<"enter the target :";
    cin>>t;
    vector<int> result =obj.twosum(v,t);
    cout<<endl;
    for(auto a : result){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}