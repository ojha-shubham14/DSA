#include<bits/stdc++.h>
using namespace std;

class Better{                   //TC: O(N)*O(K log K)--> for traversing all the string present & sorting ke liye the maximum lenght of the string be K and for sorting K log K
    //                            SC: O(K*N)
    public:
    vector<vector<string>> groupAnagram(vector<string>&strs){
        int n = strs.size();
        unordered_map <string,vector<string>> mp;           //to store the each word in sorted form of the string and it will be in the string part and vector<string> will be containing all the permutation and combination of the the sorted string which is present in the input vector.
        vector<vector<string>> result;                      //here it is the return type hence we will store the vector<string> part from the unordered_map here in the result;

        for(int i = 0; i<n ; i++){
            string temp = strs[i];                          //we will store each string in temp (one at a time)
            sort(begin(temp),temp.end());                   //we will sort the temp string.
            mp[temp].push_back(strs[i]);                    //we will store the original strs[i] as value but temp (which was sorted) will be in the Key part of it.

        }

        for(auto it: mp){
            result.push_back(it.second);                    //we will push the it.second part that is the Values (vector<string>) part of the KEYS of the unordered_map to the result vector.     
        }

        return result;
    }
};


class Optimal{
    public:
    string generate(string& word){
        int arr[26] = {0};      //here we will store the the frequency of each character of the given string
        
        for(char &ch: word){        //here the given word will be iterated character by character and stored in the given interger array at that positon

            //convert each characters to interger and store it in the array which we have created
            arr[ch-'a']++;
        }

        string new_word = "";           //to store the ascending or sorted order of the word i.e, the key which we are generating
        
        //traverse the array where we have stored the particular word, character and it's frequency

        for(int i =0; i<26; i++){

            //get the frequency of the character
            int freq = arr[i];

            //if the frequency is greater than 0 , then convert it to the string , if not greater than 0 then don't consider
            // Append the character 'freq' number of times
            // i + 'a' converts index back into character
            new_word += string(freq, i + 'a');                  //string(3, 'a');  // aaa
//                                                                string(2, 'b');  // bb
//                                                                string(1, 'c');  // c  that is it will be in order "aaabbc"
        }
        return new_word;

    }
    vector<vector<string>> groupAnagram(vector<string>&strs){
        int n = strs.size();
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;

        for(int i =0; i<n; i++){
            string word = generate(strs[i]);                //generate takes a word and make a unique key i.e, ate,tea,eat ke liye it generates aet.
            mp[word].push_back(strs[i]);
        }

        for(auto it: mp){
            result.push_back(it.second);
        }
        return result;
    }
};