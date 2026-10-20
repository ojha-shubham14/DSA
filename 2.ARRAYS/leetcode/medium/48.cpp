#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    void Rotate(vector<vector<int>> &matrix){
        int n = matrix.size();
        vector<vector<int>> answer;     //to store the answer;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                answer[j][(n-1)-i] = matrix[i][j];
            }
        }
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                matrix[i][j] = answer[i][j];
            }
        }
    }
};

class Optimal{
    public:
    void Rotate(vector<vector<int>> &matrix){
        int n = matrix.size();

        //transposing matrix

        for(int i = 0 ; i<n-1 ; i++){
            for(int j = i +1; j<n; j++){
                swap(matrix[i][j] , matrix[j][i] );
            }
        }

        //reversing the transposed matrix

        for(int i = 0 ; i<n; i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};