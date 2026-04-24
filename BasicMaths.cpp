#include<iostream>
#include<cmath>
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
void gcd(int n,int m){
    cout << "Enter the first number : ";
    cin>> n ;
    cout << endl << "Enter the second number : ";
    cin>> m ;
    int hcf = 0;
    if (n == 0 || m ==0) {
        cout << "neither of the 2 inputs should be equal to zero" ;
        return ;
    }
    for(int i = 1 ; i <= m ; i ++){
        if(n%i == 0  && m % i == 0){ // note that / will not be used and % will be used as we want the factors and it should be exacly divisible
            hcf = i;
        }
    }
    cout <<"The GCD is : " <<  hcf;
}
void armstrong(int n){ //this works only for the input which are 3digits.
    cout << "Enter number : ";
    cin>> n ;
    int original = n;
    int lastdigit;
    int sum = 0;

    int digits = 0;
    int temp = n;
    while(temp > 0){
        digits++;
        temp/= 10;
    }
    while(n>0){
        lastdigit = n % 10;
        sum = sum + pow(lastdigit,digits); //this will be proper for any number of digits of the input as we are separately counting the digits
        n = n / 10;
    }
    if(sum==original){
        cout<<"it is a armstrong number";
    }
    else cout<<"not a armstrong number";
}
void divisors(int n){
    cout<< "enter a number to check and return it's divisors : ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        if(n %i==0){
            cout<<"the divisors of the given integers are :" <<i<<"\n";
        }
    }

}
int main(){
    int m;
    divisors(m);
    return 0;
}