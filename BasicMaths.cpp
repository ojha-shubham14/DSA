#include<iostream>
using namespace std;
int countNumbers(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count = count + 1;
    }
    cout<< "The total numbers of digits in these are : " << count;
    return count;
}
int reverseNumber(int n){
    int reverse = 0 ;
    while(n > 0){
        int lastdigit =n % 10;
        reverse = (reverse * 10)+ lastdigit; // first time (0*10)+lastdigit and in the next iteration it will be (previous closing value * 0) + lastdigit , i have done like this because in the 2nd turn reverse variable should become in 2 digits right ?
        n = n / 10;
    }
    cout<< "The reverse of a given number is : "<<reverse;
    return reverse;
}
void palindrome(int n){
    int original = n; // we have to initialize a variable with n and in 3rd comment you will find the reason why we need this.  
    int reverse = 0; // dont forget to initialize it to 0 , or else it will take garbage value only. int reverse ; is wrong  
    int lastdigit = 0 ;
    while(n>0){
        lastdigit = n % 10;
        reverse = (reverse * 10) + lastdigit ;
        n = n / 10;
    }
    if(reverse == original){ // used original value because after using the while loop the n value would have been changed and its will no longer be the number given by the user.
        cout << "Is a Palindrome " << endl;
    }
    else cout << " Is not a palindrome" ;
}
int main(){
    int n;
    cout<<"Enter the numbers : " ;
    cin>>n;
    palindrome(n);
    return 0;
}