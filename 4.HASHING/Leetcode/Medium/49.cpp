#include<bits/stdc++.h>
using namespace std;

class Solution1{
    public:
    vector<vector<string>> groupAnagram(vector<string>& strs){
        int n = strs.size();

        unordered_map<string,vector<string>> mp;

        vector<vector<string>> result;

        for(int i =0; i<n; i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }

        for(auto it: mp){
            result.push_back(it.second);
        }

        return result;
    }
};


class OptimalSolution{
    public:

    string generate(string & word){
        int arr[26] ={0};
        for(char &ch: word){
            arr[ch-'a']++;
        }
        string new_word = "";

        for(int i =0; i<26; i++){
            int freq = arr[i];
            if(freq>0){
                new_word += string(freq, i + 'a');              //to convert from number of times of character to string
            }
        }
        return new_word;
    }
    vector<vector<string>> groupAnagram(vector<string> & strs){
        int n = strs.size();
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;

        for(int i =0; i<n; i++){
            string word = generate(strs[i]);            //making a sorted order of the word
            mp[word].push_back(strs[i]);
        }
        for(auto it: mp){
            result.push_back(it.second);
        }
        return result;
    }
};