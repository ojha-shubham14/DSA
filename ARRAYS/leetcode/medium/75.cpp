#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b= 0;
        vector<int> v ;
        int n2=nums.size();
        for(int i = 0 ; i<n2 ;i++ ){
            if(nums[i] == 0){
                r++;
                v.emplace_back(nums[i]);
            }
            if(nums[i] == 1){
                w++;
                v.emplace_back(nums[i]);
            }
            if(nums[i] == 2){
                b++;
                v.emplace_back(nums[i]);
            }
        }
        int n = v.size();
        for(int i=0;i<n-1;i++){
            for(int j = 0; j<n-i-1; j++){
                if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;

                }
            }
            
        }

        for(auto i: v){
            cout<<i<<" ";
        }
    }

};

int main(){
    vector<int> a = {2,0,2,1,1,0};
    Solution obj;
    obj.sortColors(a);
    return 0;
}