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


class Optimal{
    public:
        vector<int> RearrangeEle(vector<int> & nums){
            int n = nums.size();
            int posIndex = 0;       //all the positive numbers will occupy even indices
            int negIndex = 1;       // all the negative numbers will occupy odd indices
            vector<int> res(n,0);
            for(int i = 0; i<n; i++){
                if(nums[i]<0){
                    res[negIndex] = nums[i];
                    negIndex+=2;
                }
                else{
                    res[posIndex]= nums[i];
                    posIndex += 2;
                }
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

    Optimal obj;
    vector<int> ans = obj.RearrangeEle(nums);
    for(auto a : ans){
        cout<<a<<" ";
    }
    cout<<endl;
}