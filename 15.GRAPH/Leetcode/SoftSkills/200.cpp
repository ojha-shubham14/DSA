#include<bits/stdc++.h>
using namespace std;

class Optimal{          //Using Depth first search 
    public:
    void dfs(vector<vector<char>>&grid, int row, int col){
        int numberOfRows = grid.size();
        int numberOfColumns = grid[0].size();

        //this is the Boundries or the condition which will not give in obtaining a land (continuous non diagonal shells of 1 will be considered as area)

        if(row<0 || col<0 || row>=numberOfRows || col>=numberOfColumns || grid[row][col] == '0'){       //base cases

            return;             //these condition will not give us the continuous sequence or shells of 1 to consider as a area
        }

        grid[row][col]='0';     //mark it as 0 once visited

        //check all 4 direction UP,DOWN,LEFT,RIGHT for 1 , Which will be considered as Continuous sequence or shells of "1"

        dfs(grid, row-1, col);      //Checking for one in Immidiate DOWN of present grid[row][col]
        dfs(grid, row+1, col);      //Checking for one in Immidiate UP of present grid[row][col]
        dfs(grid, row, col-1);      //Checking for one in Immidiate LEFT of present grid[row][col]
        dfs(grid, row, col+1);      //Checking for one in Immidiate RIGHT of present grid[row][col]

    }
    int NumOfIslands(vector<vector<char>> & grid){              //1-> Land  0-> Water (diagonal 1's are not considered as one land it will be separated)
        int numberOfRows = grid.size();
        int numberOfColumns = grid[0].size();
        int count = 0;

        for(int i = 0 ; i< numberOfRows; i++){
            for(int j = 0 ; j<numberOfColumns; j++){
                if(grid[i][j]== '1'){
                    count++;
                    dfs(grid,i,j);              //to get the adjacent "1" shells present which would contribute to make one peice of land as an area overall if it is diagonal then it would be counted as other peice of land and would not be considered in this.
                }
            }
        }
        return count;
    }
};