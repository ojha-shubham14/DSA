#include<bits/stdc++.h>
using namespace std;
class bruteforce{
    public:
    vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix){      //check notes for overall
        int n = matrix.size();
        vector<vector<int>> answer(n,vector<int>(n));       //vector<int>(n)---> creates n elements in a row
                                                            //n ----> makes n rows of vector<int>(n)
        
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n; j++){
                answer[j][(n-1)-i] = matrix[i][j];  //means matrix[i][j] will take place in answer_matrix[j][(n-1)-i]--> for logic check the book.
            }
        }
        return answer;
        
    }
};

int main(){
    vector<vector<int>> m = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> answer;
    bruteforce obj;
    answer = obj.rotateMatrix(m);
    for(auto a : answer){
        for(auto b : a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}