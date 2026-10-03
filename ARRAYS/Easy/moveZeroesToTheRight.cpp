#include<bits/stdc++.h>
using namespace std;


class Solution {            //Note: this breaks the order of the non zero elements but according to the question we have to maintain the order of the non zeroes element as it is.
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        //sorting
        for(int i =0; i<n-1; i++){
            for(int j = 0; j<n-i-1; j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        //reversing
        for(int start = 0, end = n-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
    }
};

class BruteForceSolution{
    public:
        void moveZeroesToTheEndWithoutChangingOrder(vector<int> &nums){
            int n = nums.size();
            vector<int> temp ;
            for(int i = 0; i<n; i++){
                if(nums[i]!=0){
                    temp.push_back(nums[i]);
                }
            }
            int s = temp.size();
            for(int i = 0; i<s; i++){
                nums[i]= temp[i];
            }
            for(int i = s; i<n; i++){
                nums[i]= 0;
            }
            
        }
};

int shubham(){
    vector<int> V ={1,2,0,0,3,2,0,4,0,7,5,4,3,2,1,0,98};
    BruteForceSolution object;
    object.moveZeroesToTheEndWithoutChangingOrder(V);
    cout<<"array after moving all the zeroes : "<<endl;
    for(auto a : V){
        cout<<a<<" ";
    }
    return 0;
}
int main(){
    shubham();
}