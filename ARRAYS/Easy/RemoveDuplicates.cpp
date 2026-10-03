#include<bits/stdc++.h>
using namespace std; 
/*class BruteForcesolution{                 
    public:
        void removeDuplicates(int nums[]){
            int i = 0;
            int n = sizeof(nums); 
            for(int j =1;j<n; j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
            }
           cout<<"array is : "<<endl;
           for(int i = 0; i<n;i++){
            cout<<nums[i]<<" ";

           }
        }
};*/

class OptimalSolution{
    public:
        int removeDuplicatesFromSortedArray(vector<int> &nums){
            int i =0;       //first pointer
            for(int j =1; j<nums.size();j++){       //second pointer, it iterates until non equal to nums[i] comes in the array
                if(nums[j]!=nums[i]){
                    nums[i+1]=nums[j];
                    i++;
                }

            }
            return (i+1);
        }
};
int main(){
    vector<int> nums ={1,1,1,2,2,2,2,2,3,3,4,4,4,4};
    OptimalSolution obj;
    int k =obj.removeDuplicatesFromSortedArray(nums);
    cout<<k<<endl;
    for(auto a : nums){
        cout<<a<<" ";
    }
    
    return 0;
}