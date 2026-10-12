#include<bits/stdc++.h>
using namespace std;

class Bruteforce{
    public:
        vector<int> Rearrange(vector<int> &nums){
            int n = nums.size();
            vector<int> pos;
            vector<int> neg;
            for(int i = 0; i<n; i++){
                if(nums[i]>0){
                    pos.push_back(nums[i]);
                }
                else{
                    neg.push_back(nums[i]);
                }
            } 
            int n1 = pos.size();
            int n2 = neg.size();
            int a = 0;
            int b = 0;
            vector<int> res;
            while(a<n1 && b<n2){
                res.push_back(pos[a]);
                a++;
                res.push_back(neg[b]);
                b++;
            }
            return res;
        }
};

int main(){
    vector<int> nums = {2,4,5,-1,-3,-4};
    Bruteforce object;
    vector<int> res = object.Rearrange(nums);
    for(auto a : res){
        cout<<a<<" ";

    }
    cout<<endl;
}