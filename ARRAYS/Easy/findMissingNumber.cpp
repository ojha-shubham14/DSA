#include<bits/stdc++.h>
using namespace std;
class bruteforce{
    public:
        int findmissingNumber(vector<int>& nums){
            int n = nums.size();
            for(int i = 0; i<n-1; i++){
                for(int j = 0; j<n-i-1; j++){
                    if(nums[j]>nums[j+1]){
                        int temp = nums[j];
                        nums[j]=nums[j+1];
                        nums[j+1]=temp;
                    }
                }
            
            }
            int i = 0;
            for(i=0; i<n; i++){
                if(nums[i]!=i){
                    break;
                }
            }
            return i;
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
    bruteforce object;
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