#include <iostream>
using namespace std;
void pattern0(int n ){
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<i+1 ; j++){
            cout<<" * " ;
        }
        cout<<endl;
    }
}
void pattern1(int n ){
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<n ; j++){
            cout<<" * " ;
        }
        cout<<endl;
    }
}
void pattern2(int n ){
    char chr = 'A';
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<n ; j++){
            cout<< chr << " " ;
            chr +=1;
        }
        cout<<endl;
    }
}
void pattern3(int n ){
    for(int i = 0 ; i<n;i++){
        char chr = 'A';
        for(int j =0 ; j<n ; j++){
            cout<< chr << " " ;
            chr +=1;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    char chr = 'A';
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<(i+1) ; j++){
            cout<< chr << " " ;
        }
        chr +=1;
        cout<<endl;
    }
}
void pattern5(int  n){
    char chr = 'A';
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<(i+1) ; j++){
            cout<< chr << " " ;
            chr +=1;
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i = 0 ; i<n;i++){
        char chr = 'A'; //This borns here at the starting of the I loop and,
        for(int j=0 ; j<=i ; j++){
            cout<< chr << " " ;
            chr+=1;

        } 
        cout<<endl;
    } // it dies here at the ending of the I loop and it gets reset again to A at the start of the I loop.
}
void pattern7(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++ ){
            cout << j ;
        }
        cout << endl;
    }
}
void pattern8(int n){
    for (int i =0 ; i<n ; i++){
        for (int j = n; j>i;j--){
            cout<< " * " << " ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for (int i =0 ; i<n ; i++){
        for (int j = n; j>i;j--){
            cout<< j << " ";
        }
        cout<<endl;
    }
}
void pattern10  (int n){
    for (int i =0 ; i<n ; i++){
        for (int j = 1; j<=n-i ;j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for (int i =0; i < n ; i++){
        for(int j=1; j<=n-i;j++){ // j starts from 1 and prints till the N - i numbers, for 1st row 1 to n , for 2nd row 1 to n-1,for the third row from 1 to n-2
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for (int i =0; i < n ; i++){
        for(int j=1; j<=n-i;j++){ // j starts from 1 and prints till the N - i numbers, for 1st row 1 to n , for 2nd row 1 to n-1,for the third row from 1 to n-2
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int n){
    for (int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for (int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //stars
        for(int j=0; j< 2*n -(2*i+1); j++){
            cout << "*";
        }
        //numbers
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for (int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j< 2*n -(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i =0 ; i<n ; i++){
        for(int j=0;j<i+1;j++){
            cout<< "*";
        }
        cout<<endl;
    }
    for(int i =0 ; i<n ; i++){
        for(int j=0;j<n-(i+1);j++){
            cout<< "*";
        }
        cout<<endl;
    }
}
void pattern17(int n){
    int start = 1;
    for(int i =0 ; i<n ; i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start =0;
        }
        for(int j=0;j<=i;j++){
            cout<< start <<" ";
            start = 1 - start ;
        }
        cout<<endl;
    }
}
void pattern18(int n){
    int space = 2* (n-1);
   for (int i=1; i<=n; i++){
    //numbers
        for(int j=1; j<=i; j++){
            cout << j;
        }
    //space
        for(int j=1; j<=space; j++){
            cout << " ";
        }
    //numbers
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout<<endl;
        space -=2;
    } 
}
void pattern19(int n){
    int count = 1; // the variable count is req as the j loop se akele nahi ho paya mere se , so took an extra variable
    for(int i = 0; i<=n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<< count << " "; //count is getting printed and the getting incremented in the next line
            count ++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout << " Enter the number of lines for the Pattern :";
    cin>>n;
    pattern19(n);
}