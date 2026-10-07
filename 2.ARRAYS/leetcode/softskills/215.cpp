#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> s(nums.begin(),nums.end());
        for(auto a: nums){
            s.insert(a);
        }
        return *prev(s.end(),k);


    }
};
int main(){
    vector<int> v = {1,2,7,6,5,4,9,6,4,3};
    int k=3;
    Solution object;

    int result = object.findKthLargest(v,k);
    cout<<result;
}