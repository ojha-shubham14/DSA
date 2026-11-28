#include<bits/stdc++.h>
using namespace std;

class Bruteforce{       //TC: O(n2) and SC: O(1)
    public:
    vector<int> ProductExceptSelf(vector<int> & nums){
        int n = nums.size();
        vector<int> answer(n);

        for(int i =0; i<n; i++){

            int product = 1;

            for(int j =0; j<n; j++){

                if(i!=j){
                    product *= nums[j];
                }
                nums[i] = product;
            }
        }

        return answer;
    }
};



class Better1{          //USING DIVISON OPERATOR--> which is not allowed in leetcode i.e, follow up question is given
    public:

    vector<int> productExceptSelf(vector<int> &nums){
        
        int n = nums.size();

        //we will need 2 variable 
        int productWithoutZeroes = 1;
        int ZeroCounter =0;

        //getting both variables values
        for(int i =0; i<n ; i++){
            if(nums[i]==0){
                ZeroCounter ++;
            }
            else{
                productWithoutZeroes *= nums[i];
            }
        }

        vector<int> answer(n);

        for(int i =0; i<n ; i++){

            if(nums[i]!=0){
                if(ZeroCounter>0){
                    answer[i]=0;
                }
                else{
                    answer[i] = productWithoutZeroes/nums[i];
                }
            }

            else{       //if nums[i] == 0 that means already atleast 1 zero is there
                
                if(ZeroCounter>1){          //1 zero is already there that is itself nums[i]

                    answer[i] = 0;
                }
                else{
                    answer[i] = productWithoutZeroes;       //agar ek he zero tha and we are on it then except that zero kitna hoga total at that index in answer[i] that is productWithout zeroes
                }
            }
        }

        return answer;
    }
};

/*Instead of using "/" operator we can use at that time user defined divide function

    int divide (int dividend , int divisor){
        int count = 0;
        while(dividend>=divisor){       // dividend = 20 and divisor = 4
            dividend -= divisor;
            count ++;
        }
        
        return count ;      ----> which is 4
    }
    NOTE: This won't work for if either of dividend or the divisor are negative integer

    int divide (int dividend , int divisor){
        int count = 0;

        bool negative = (dividend<0) != (divisor <0);

        dividend = abs(dividend);       //convert to positive
        divisor = abs(divisor);         //convert to positive

        while(dividend>=divisor){       // dividend = 20 and divisor = 4
            dividend -= divisor;
            count ++;
        }

        if(negative){       //if any of the one from dividend and divisor is -ve integer then bool Negative will be True and resultant answer will also be  -ve in Integer and if both are actually -ve or +ve then bool Negative will become false
            count = -count;
        }

        return count ;      ----> which is 4
    }
*/



class Better2{
    public:
    vector<int> productExceptSelf (vector<int> & nums){         //TC: O(n)   SC: O(2n)

        int n = nums.size();

        //we will use 2 array leftProduct and Right product to store the product of the number after each index change 
        vector<int> left(n);
        vector<int> right(n);

        //left side of nums[0] is nothing so we store 1 and Right side of nums[n-1] has nothing so store 1
        
        left[0] = 1;
        right[n-1] = 1;

        //filling left array 
        for(int i =1 ; i<n ; i++){          //starts from i =1 because we have already stored left[0]

            left[i] = left[i-1] * nums[i-1];
        }

        //filling right array 
        for(int i = n-2 ; i>0 ; i--){
            
            right[i] = right[i+1] * nums[i+1];
        }

        //getting the final answer ready for that multiply each index value of left and right with each other at answer[i]

        vector<int> answer(n);

        for(int i=0; i<n ; i++){
            
            answer[i] = left[i] * right[i];
        }

        return answer;

    }
};



class optimal{                  //TC: O(n) and SC:O(1)
    public: 
    vector<int> productExceptSelf(vector<int> & nums){

        int n = nums.size();

        //storing left prefix in result and right prefix in variable so the space complexity will become O(1)

        //storing left prefix in answer array
        vector<int> answer(n);
        answer[0] = 1;           //as we know left[0] = 1 as there is no element in the left
        int rightSuffix = 1;     //as we know right(n-1) = 1 as there is no element on the right of the array end

        for(int i =1 ; i<n ; i++){
            answer[i] = answer[i-1] * nums[i-1];
        }


        //now getting the final answer
        for(int i=n-1; i>0; i--){           //starting from the right as we have to multiply each value of the right to the answer(which is actually conataining leftPrefix) which is there at the rightmost or the end of the array 

            answer[i] = answer[i] * rightSuffix;
            rightSuffix *= nums[i];             //multiplying right suffix value with nums[i] as each time the array iterates form the end

        }

        return answer;
    }
};