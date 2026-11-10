#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();    //total elements in a 1d array
        int N = n*n;            //total number or elements in the in 2d array

        int repeating = -1;
        int missing = -1;

        for(int i = 1 ; i<=N ; i++){        //to iterate over total elements in the array
            int count = 0;
            for(int j =0; j<n; j++){
                for(int k = 0 ; k<n; k++){
                    if(grid[j][k]==i){
                        count ++;
                    }
                }
            }
            if(count > 1){
                repeating = i;
            }
            if(count==0){
                missing = i;
            }
        }
        return {repeating,missing};
    }
};