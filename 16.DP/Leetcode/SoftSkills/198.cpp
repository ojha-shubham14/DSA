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

class BetterSolution{
    public:
    /*
    Recursive function to find the maximum robbed money
    as Recursion trees grows and re calculate the things which we have already calculated , example solve(4) has 2 sub branches of solve(2) and solve(3) and these sub problems have more sub branches.

            that is: 
                     dp[i] stores the maximum money calculated for index i.
                     Recursion first solves smaller subproblems (i-2 and i-1).
                     Once their answers are returned, we calculate the current
                     answer and store it at dp[i] to avoid recalculating it.
    DP array is to store the previously calculated answer
    */
    int solve(int i, vector<int> & nums , vector<int> & dp){
        //Base case 1:
        if(i==0){
            return nums[0];
        }

        //Base case 2: when index becomes -ve then no houses left 
        if(i<0) return 0;


        //DP CHECK:
        // Check whether we have already calculated
        // the answer for this particular index i.
        // If yes, return the stored answer.
        if(dp[i] != -1) return dp[i];



        /*
         PICK:
         Rob the current house i.
         Add its money and move to house i-2
         because adjacent houses cannot be robbed.
        */
        int pick = nums[i]+ solve(i-2,nums,dp);


        /*
        NOT PICK:
         Skip the current house i.
         Move to the previous house i-1.
        */
        int not_pick = solve(i-1,nums,dp);


        /*
        STORE:
        Store the maximum of pick and notPick
        in dp[i] so that we don't calculate it again.
        */
        return dp[i] = max(pick,not_pick);
    }

    int Rob(vector<int> & nums){
        int n = nums.size();

        //create a dp array of size n and initialise all the elements with -1 

        vector<int> dp(n,-1);

        return solve(n-1,nums,dp);
    }
};


class OptimalSolution{
    public:
    int Rob(vector<int> & nums){

        int n = nums.size();

        //edge case : if there is only one house then rob that house and no need to take tension for adjacent house
        if(n==1) return nums[0];

        //create a DP array of size n and initialize with 0

        vector<int> dp(n,0);

        //BASE CASE 1 : if there is only 1 house then store it in the dp array 
        dp[0]= nums[0];

        //BASE CASE 2: if there is 2 house then compare which has more money then rob  the house.
        dp[1] = max(nums[0],nums[1]);

        //we need to start form 3rd house as we have already solved and calculated for house 1 and 2

        for(int i = 2; i<n; i++){
            int pick = nums[i] + dp[i-2];

            int notPick = dp[i-1];

            dp[i] = max(pick , notPick);
        }
        //return the maximum money robbed from all houses, because :
        /*
        DP	Meaning
        dp[0]	Maximum money from house 0
        dp[1]	Maximum money from houses 0–1
        dp[2]	Maximum money from houses 0–2
        dp[3]	Maximum money from houses 0–3
        dp[4]	Maximum money from houses 0–4   
        */
        return dp[n-1];


    }
};