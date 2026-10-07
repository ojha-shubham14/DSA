#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cout<<"Enter the Main string  single word in 'Lower case' :";
    cin>>word;

    //pre-Compute Part
    int hash[26] = {0};
    for(int i=0;i<word.length(); i++){
        hash[word[i]-'a'] ++;  //Question : How the particular character from the array occurence is stored from this ?
        /*ANS :

        hash[] is an array which demands an integer value inside it's bracket but we are providing
        it with the character of the main string, then it auto typecast the character of the string 
        to it's ascii value as the hash array is declared as int thus it happen in this way.

        example :

        word = apple, then hash[word[i]-'a'] means "a" from the apple and subtracted with the as given in conditon a - a
        the ascii value of the a is 97 hence 97-97 = 0, thus the occurence of the a will be stored in the 0th Index*/
    }

    //fetch Part
    int q;
    cout<<"\nhow many characters you want to find the occurences :";
    cin>>q;
    while(q--){
        char character;
        cout<<"\nEnter the character you are looking for :";
        cin>>character; 
        cout<<hash[character-'a'];   // question : then why to  subtraction with "a" we have already done in the precomputation part
        /* ANS:

        as we are fetching and already computed the occurences of the characters in the hash array 
        and we want to fetch that character which is asked by the user, suppose user entered the
        character as "s" then hash[s ka ascii value] then it goes to the index of 115 but we have
        declaraed the hash array size as 26 so it returns the unexpected output which is worse
        than the garbage value.(array out of bound ho jayega isiliye).

        to get the exact positon of the s we do hash[charcter-'a']--> this tells the exact positon
        of the s in the hash array... s-->115 and a-->97 so 115-97 = 18 then it goes to the 18th Index of the
        hash array and prints the occurence.
        */ 
    }
}