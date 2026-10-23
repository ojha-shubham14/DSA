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

class better{       //this approach uses extra space for marking the row and column where zero is found. and later making the entire row and column of matrix as zero
    public:
    void setMat(vector<vector<int>> &mat){
        int n = mat.size();
        int m = mat[0].size();
        vector<int> row(n,0);   //row vector default as 0 and becomes 1 when 0 is encountered while iterating through the matrix
        vector<int> col(m,0);   //row vector default as 0 and becomes 1 when 0 is encountered while iterating through the matrix

        for(int i = 0 ; i<n ; i++){         //loop for encountering and storing the respective Index where the zero is present so that later we can mark the whole row or col as 0
            for(int j = 0 ; j<n; j++){
                if(mat[i][j]==0){       //suppose 0 is at (1,1) then, 
                    row[i]=1;           //row[1] will be marked as 1 i.e, {0,1,0} and,
                    col[j]=1;           //col[1] will be marked as 1 i.e, {0,1,0}.
                }
            }
        }

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(row[i]==1 || col[j]==1){
                    mat[i][j]=0;            //see we are changing the matrix now, using the row and col Index value where it is 1, due to this the whole row and column are marked as 0
                }
            }
        }
        
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



    vector<vector<int>> mat1 = {
        {1,2,3},
        {4,0,6},
        {7,8,9}
    };
    better obj1;
    obj1.setMat(mat1);

    for(auto a: mat1){
        for(auto b : a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}