#include<bits/stdc++.h>
using namespace std;

class Optimal{
    public:
    vector<int> spiral(vector<vector<int>> & mat){
        int n = mat.size();
        int m = mat[0].size();
        int top = 0,left = 0;
        int bottom = n-1;
        int right = m-1;
        vector<int> ans;

        while(top<=bottom && left<=right){

            //now i is at top left most layer and we need to go to top right most using/traversing the top layer from leftmost to rightmost.
            for(int i = left; i<=right; i++){
                ans.push_back(mat[top][i]);
            }
            top ++;

            //now i is at rightmost of toplayer and from there to the bottom by traversing whole right column
            for(int i = top ; i<=bottom ; i++){
                ans.push_back(mat[i][right]);
            }
            right --;

            if(top <= bottom){
                
                // now i is at bottom rightmost and from there to left most bottom, so we need to traverse whole bottom row.

                for(int i = right ; i>= left ; i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom --;
            }
            
            if(left<=right){
                //now i is at bottom left most element and from there we need to go one below the top left most element, using traversing whole left column.

                for(int i = bottom ; i>=top ; i--){
                    ans.push_back(mat[i][left]);
                }
                left ++;
            }
        }
        return ans;
    }
};

int main(){
    Optimal object;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> res = object.spiral(matrix);
    for(auto a: res){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}