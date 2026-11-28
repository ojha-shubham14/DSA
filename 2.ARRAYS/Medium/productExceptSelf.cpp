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