#include<bits/stdc++.h>
using namespace std;

class Bruteforce{
    public:
    vector<int> twosum(vector<int> & nums, int target){
        int n = nums.size();
        for(int i= 0 ; i<n ; i++){
            for(int j = i+1; j<n ; j++){
                if(nums[i]+ nums[j] == target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};






class optimal{
    public:
    vector<int> twoSum(vector<int> nums , int target){      //this uses unordered map to store the elements and which iterates once only throughout the vector
        int n = nums.size();
        unordered_map<int,int> mp;                          //stores the Value and it's index where it is present
        for(int i = 0 ; i<n ; i++){
            int remaining_needed = target - nums[i];        //as we iterated only once, so it finds the which element is required at the current iteration so that we can find the remaining element from the map if present and if not present then we can add that element and it's index position to the map 
            if(mp.find(remaining_needed)!= mp.end()){       //mp.find(element) returns an iterator pointing at that position and if not found then it returns a special iterator which is end().
                return{mp[remaining_needed],i};             //if found then return {index of the remaining element and the current index(i)}
            }       
            mp[nums[i]]=i;                                  //if not found then add that element into map container with it's index position
        }
        return {};      //to run the function if nothing returned before this line;
    }
};