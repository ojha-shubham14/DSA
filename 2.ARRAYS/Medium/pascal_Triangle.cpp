#include<bits/stdc++.h>
using namespace std;
class Bruteforce{   // overflow of long long is possible and also it uses 3 times loop.  
    public:
        //Factorial funtion 
        long long fact(int x){
            long long res = 1;
            for(int i = 2;i<=x; i++){
                res*=i;
            }
            return res;
        }
        //nCr function by using factorial function which we have already made
        long long ncr(int n , int r){
            return fact(n)/ (fact(r)* fact(n-r));
        }
        //the function which prints the actual element present at the row and column
        long long PascalElement(int n , int r){
            return ncr(n-1,r-1);
        }
};

class optimal{
    public: 
    long long ncr(int n , int r){
        if(r<0 || r>n){     // column cannot be bigger than the row it is i.e, for row 1 we can't have col 7 right in pascal triangle and also it cannot be less than 0
            return 0;
        }

        r = min(r,n-r);     //C(100,98) and C(100,2) are same hen we use nCr formula and why one should caluclate 98 times when we can get it by 2 times ? 
                            // that is nCr and nC(n-r) both are same but it makes the code faster by adding this line.

        long long res = 1;
        for(int i =0 ; i<r; i++){       //jitni col utni tak he loop run karegi (to know the reason check the handwritten book). 
            res = res*(n-i);        //Numerator first gets calculated i.e, 10*9*8....... and so on
            res = res/(i+1);        //denominator then gets calculated i.e, 1*2*3....... and so on. not in 3*2*1 becasue first it check (10/3)*(9/2)*(8/3) but this gives error as 10 is not divisible by 3 so instead we use (10/1)*(9/2)*(8/3) then 10 is divisible by 1 and other elements will be cross divided if needed.
        }
        return res;
    }

    int pascalElement(int row,int column){
        return ncr(row-1, column-1);
    }
};

int main(){
    optimal obj;
    int n;
    int r;
    cout<<"enter the row number:";
    cin>>n;
    cout<<endl<<"enter the col number:";
    cin>>r;
    cout<<endl<<"the element present in the pascal triangle at the particular row and column is : ";
    cout<<endl;
    
    cout<<obj.pascalElement(n,r);
    return 0;
}
