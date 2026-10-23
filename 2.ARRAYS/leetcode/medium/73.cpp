#include<bits/stdc++.h>
using namespace std;
class bruteforce {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> dup = matrix;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m; j++){
                if(matrix[i][j]==0){
                    for(int k = 0 ; k<m ; k++){
                        dup[i][k]=0;
                    }
                    for(int k = 0 ; k<n; k++){
                        dup[k][j]=0;
                    }
                }
            }
        }
        matrix = dup;
    }
};



