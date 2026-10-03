
class Solution {
    public:
    void moveZeroes(vector<int>& nums) {
        //we will use 2 pointers, for that we need to know where the first zero is present in the array
        int j;      //pointer for initial zero
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        //now we will assign non zero element from next position from where the first zero is encountered.
        for(int i = j+1; i<nums.size(); i++){
            if(nums[i]!=0){
                 //swap the elements, that will make the zero shift towards right and non zero towards the left.
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
    }
};