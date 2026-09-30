#include<bits/stdc++.h>
using namespace std; 
class solution{
    public:
        void removeDuplicates(vector<int> &nums){
            int i = 0;
            int n = nums.size(); 
            for(int j =1;j<n; j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
            }
           cout<<"array is : "<<endl;
           for(auto it : nums){
            cout<<it<<" ";
            
           }
        }
};
int main(){
    vector<int> v = {1,1,2,2,2,3,3};
    solution object;
    object.removeDuplicates(v);
    return 0;
}