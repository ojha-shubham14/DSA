#include<bits/stdc++.h>
using namespace std;

class better{
    public:
        int findmissingNumber(vector<int>& nums){
            int n = nums.size();
            int xor1 = 0, xor2=0;
            for(int i = 0; i<n; i++){
                xor2^=nums[i];
                xor1^=i;
            }
            xor1^=n;
            return xor1^xor2;
        }
};

class Optimal{
    public:
        int findMissingNumberFromArray(vector<int> &nums){
            int n = nums.size();
            int expected_sum = n*(n+1)/2;
            int sum_obtained = 0;
            for(int i =0; i<n; i++){
                sum_obtained+=nums[i];
            }
            int difference = expected_sum-sum_obtained;
            return difference;
        }
};

int shubham(){
    vector<int> nums = {3,2,6,9,8,7,5,4,0};
    better object;
    int result = object.findmissingNumber(nums);
    cout<<"the missing number in the array is :" <<result<<endl;
    return 0;
}
int main(){
    shubham();
    vector<int> nums = {3,2,6,9,8,7,5,4,0};
    Optimal obj;
    int res = obj.findMissingNumberFromArray(nums);
    cout<<"Found the missing number in the arrary and it is : "<<res<<endl;
    return 0;
}