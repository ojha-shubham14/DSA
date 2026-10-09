#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int element;        //for selecting the element
        int count = 0 ;     //for counting the selected element locally in the list, once it reaches zero then the element changes to next of that element where current element became zero.
        int n = nums.size();
        for(int i =0 ; i<n; i++){
            if(count == 0){ //the place where we are starting to assign the element and count if matches again , subtract one if not found the same selected element next.
                element = nums[i];
                count = 1;
            }
            else if (nums[i]==element){    //if the next element is same as current element then increase the count by 1
                count ++;
            }
            else{                       // if not then decrease the count by 1
                count --;
            }
        }

        int count2 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==element){      //if the last previous element in moore's voting algorithm is equal to the current element then increase the count2 by 1
                count2++;
            }
            if(count2>(n/2)){       //if count is greatern than half of the size of the array then return the element
                return element;
            }
        }
        return -1;
    }
};