#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    int search(vector<int> &nums , int target){     //sorted array me se we have to return the index of the target
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;          //if target not in the array 
    }
};


class better{
    public:
    int search(vector<int> &nums , int target){
        int n = nums.size();
        int low = 0;
        int high = (int)nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){          // target is equivalent to mid
                return mid;
            }
            else if (nums[mid]<target){     //searches the right half
                low = mid+1;
            }
            else{               //searches only the left half
                high = mid -1;
            }
        }
        return -1;          //when not in the array
    }
    
};