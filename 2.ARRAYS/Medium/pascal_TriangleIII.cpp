#include<bits/stdc++.h>
using namespace std;

class Bruteforce {
public:
    long long ncr(int n, int r) {
        if (r < 0 || r > n) {
            return 0;
        }

        r = min(r, n - r);
        long long res = 1;

        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }

        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int r = 1; r <=numRows; r++) {
            vector<int> row;

            for (int c = 1; c <= r; c++) {
                row.push_back(ncr(r-1, c-1));
            }

            ans.push_back(row);
        }

        return ans;
    }
};

class optimal{
    public:
    vector<vector<int>> triangle(int numRows){
        vector<vector<int>> answer;
        for(int r = 1 ; r <= numRows ; r++){
            long long currentElement = 1;
            vector<int> row;
            for(int c = 1 ; c<=r ; c++){
                row.push_back(currentElement);
                currentElement = currentElement * (r-c )/c;         //row - col / col
            }
            answer.push_back(row);
        }
        return answer;
    }
};

int main(){
    vector<vector<int>> answer;
    optimal obj;
    answer = obj.triangle(5);
    for(auto a : answer){
        for(auto element : a){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}