#include<bits/stdc++.h>
using namespace std;
/*
First understand the decision at every house.

At every index, we have two choices:
1. Pick the current house.
2. Don't pick the current house
Choice 1: Pick
If we rob the current house, we cannot rob the previous adjacent house. So we move two steps backward. that is (nums[i] + f(i-2))

Choice 2: Don't Pick
If we don't rob the current house, we can consider the previous house.
f(i-1)

Therefore:
f(i)=\max(nums[i]+f(i-2),f(i-1))
*/

class Bruteforce{           //TC:O(2^N) approximately Because on each finction call of solve() it is calling two times function calls i.e, solve(i-2) and solve(i-1) and these two will call further more times till i becomes zero or the the base case is attained and SC: O(N) for using recursion and storing in the stack
    public:
    int solve(int i , vector<int> & nums){              //Recursive function to get the maximum Robbing amount from House 0 to House i
        if(i==0) return nums[0];
        if(i<0) return 0;           //where i is the house number

        //pick the current House
        int pick = nums[i] + solve(i-2,nums);        //that means you can pick this house and pick the 2nd previous house (not the immidiate previous or next because The security alert will ring)

        //don't pick the current House
        int not_pick = solve(i-1,nums);              //that means you cannot pick the current one then you can pick the one previous one and one next one to the current one.

        return max(pick,not_pick);
    }

    int Rob(vector<int> & nums){
        int n = nums.size();            //total number of House present so that we can rob the maximum
        return solve(n-1,nums);         //this gives the maximum noney we can rob and we are starting from the last House as we're using Recursion.
    }
};