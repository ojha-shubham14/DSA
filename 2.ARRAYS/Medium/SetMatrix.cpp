#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    vector<vector<int>> setmat(vector<vector<int>> matrix){
        vector<vector<int>> duplicate = matrix;
        int n = matrix.size();      //tells how many rows are there
        int m = matrix[0].size();   //tells how many columns are there

        //Traverse the original Matrix
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<m ; j++){

                if(matrix[i][j]==0){        //checking where is the the zero encounterd in the origianl array

                   for(int k = 0; k<m; k++){        //Marking entire row with 0 in Duplicate matrix; Note: Row is traversed using Column "m"
                        duplicate[i][k] = 0;
                   }


                   for(int k = 0 ; k<n; k++){       //Marking entire column with 0 in Duplicate matrix; Note: Columns are traversed using Row "n"
                        duplicate[k][j] = 0;
                   }
                }
            }
        }
        matrix = duplicate;     //changes in the duplicate matrix will be assigned to original matrix;
        return matrix;
    }
};

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,0,6},
        {7,8,9}
    };
    bruteforce obj;
    vector<vector<int>> dup;
    dup = obj.setmat(mat);

    for(auto a: dup){
        for(auto b : a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}