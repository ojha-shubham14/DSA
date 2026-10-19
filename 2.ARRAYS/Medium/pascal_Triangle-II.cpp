#include<bits/stdc++.h>
using namespace std;
class bruteforce{
    public: 
    long long ncr(int n , int r){
        if(r<0 || r>n){
            return 0;
        }
        r = min(r,n-r);

        long long res = 1;
        for(int i = 0; i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }

    vector<int> getRow(int rowIndex){
        vector<int> row;
        for(int i = 1 ; i<=rowIndex; i++){    //will go till rowIndex because Row number signifies how many Element present in each row. 
            row.push_back(ncr(rowIndex-1,i-1)); //ncr(rowIndex,i) will find it out each element at each iteration, and Push_Back will add this into the row vector.
        }
        return row;

    }
};

class optimal{
    public: 
        vector<int> getRow(int rowIndex){
            vector<int> row;    //to store the Index and return it
            long long current = 1;      //this stores the current element from the pascal triangle.
            row.push_back(1);

            for(int col = 1 ; col<=rowIndex ; col++){
                current =   current * (rowIndex-col+1)/col; // to know why we have used this then do check my dsa notes, detailed explantion is there. 
                row.push_back(current);
            }
            return row;

        }
};

int main(){
    optimal obj;
    vector<int> row;
    row = obj.getRow(5);
    for(auto a : row){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}