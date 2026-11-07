#include<bits/stdc++.h>
using namespace std;

class bruteforce{       //TC: O(NxN!)   SC:O(1) & not to use this in to write in Interview we can just verbaly say this
    public:
};

class better{           //using STL property , not recommended to use in Interview we can just say verbaly
    public:
    void nextPermutation(vector<int> & nums){
        next_permutation(nums.begin(),nums.end());
    }
};