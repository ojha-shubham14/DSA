#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    bool linearSearch(vector<int> &nums, int k){
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]==k){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int> &nums){
        int n = nums.size();
        int longest = 1;                    //stores the length of the longest consecutive number in sequence
        for(int i =0; i<n; i++){
            int x = nums[i];
            int count =1;                   //store the lenght of current consecutive sequence of the number.
            while(linearSearch(nums,x+1)== true){
                x++;
                count++;
            }
            longest = max(longest,count);           //if current consecutive number becomes more than longest then update the value of longest.
        }
        return longest;
    }
};

class Better{
    public:
    int longestConsecutive(vector<int> &nums){
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;                  //to count the from the current consecutive number
        int longest = 1;                 //to store the longest consecutive sequence of the number
        int lastElement = INT_MIN;                // to store the last element which was stored in the count and if again it encounters the same number then not to count it.

        for(int i =0; i<n; i++){
            if(nums[i]-1 == lastElement){               //that if the current element value -1 is equal to lastElement which we have stored then that means this current element nums[i] is the immidiate next sequence of the previous number then store it in the count;
                count++;
                lastElement=nums[i];
            }
            else if(nums[i] == lastElement){            //if current element is equal to the last element then that means they are same then don't do anything just skip this element.
                continue;
            }
            else if(nums[i] != lastElement){            //if above 2 cases are not executed and this is executed then it means if current element is not equivalent to previous element that means the it is not part of the actual sequence that means it is some random number then start from the begining by storin the count as 1 and last element as curent element.
                count =1;
                lastElement = nums[i];
            }
        }
        longest = max(count,longest);
        return longest;
    }
};


class optimal{
    public:
    int longestConsecutive(vector<int> & nums){
        int n = nums.size();

        //using Unordered_set which won't have duplicates and insertion and finding is O(1) where as for set and multiset it is O(log n)
        unordered_set<int> st(nums.begin(),nums.end());         //storing every non repetative elements
        int longest = 0;
        for(auto it: st){
            if(st.find(it-1)==st.end()){                    //that means if it-1 is not there in the set then that means no other element is smaller than this element
                int currentElement = it;
                int count = 1;
                while(st.find(currentElement + 1)!= st.end()){          //search if the current immidiate next number to current is present or not, if it is present then that is our next number so current++
                    currentElement++;
                    count++;
                }
                longest = max(longest,count);               //store the maximum current count to the longest
            }   
        }
        return longest;
    }
};