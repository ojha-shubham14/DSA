#include<bits/stdc++.h>
using namespace std;

//  Bruteforce method
int f(char a , string w){
    int count=0;
    for(int i =0;i<w.length(); i++){
        if(w[i]==a){ // [i] mean is that it checks the character by character of the string;
            count +=1;
        }
    }
    return count;
}
int main(){
    string word;
    cout<< "enter the string input :";
    cin >> word;
    char character;
    cout<< "Enter the character you are looking for :";
    cin>>character;
    cout<<f(character,word);
    return 0;
}