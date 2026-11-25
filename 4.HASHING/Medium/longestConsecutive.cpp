#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    bool linearSearch(vector<int> &nums, int k){
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]==k){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int> &nums){
        int n = nums.size();
        int longest = 1;                    //stores the length of the longest consecutive number in sequence
        for(int i =0; i<n; i++){
            int x = nums[i];
            int count =1;                   //store the lenght of current consecutive sequence of the number.
            while(linearSearch(nums,x+1)== true){
                x++;
                count++;
            }
            longest = max(longest,count);           //if current consecutive number becomes more than longest then update the value of longest.
        }
        return longest;
    }
};