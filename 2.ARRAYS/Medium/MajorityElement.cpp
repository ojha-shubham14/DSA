#include<bits/stdc++.h>
using namespace std;
class BruteForce{
    public:
    int MajortiyElement(vector<int> & nums){
        int n = nums.size();
        int i = 0;
        for(i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n;j++){
                if(nums[i]==nums[j]){
                    count ++;
                }
                if(count > (n/2)){
                    break;
                }
            }
            return nums[i];
        }
        
    }
};

class Better{
    public:
    int MajorityEle(vector<int> & v){
        int n = v.size();
        map<int,int> mpp;
        for(int i = 0; i<n; i++){           //loop takes O(N) TC and map insertion takes O(log n) TC so it total TC: O(N LOG N)
            mpp[v[i]]++;
        }
        for(auto it: mpp){          //map uses iterator to iterate through it's element which takes O(N) TC and SC: O(n)--> when all the elements are unique
            if(it.second>(n/2)){
                return it.first;
            }
        }
        return -1;  //when no element crosses the mark of more than n/2 times
    }
};


class Optimal{              //*** MOORE'S VOTING ALGORITHM ***
    public:
    int majority(vector<int> & v){
        int element;        //for selecting the element
        int count = 0 ;     //for counting the selected element locally in the list, once it reaches zero then the element changes to next of that element where current element became zero.
        int n = v.size();
        for(int i =0 ; i<n; i++){
            if(count == 0){ //the place where we are starting to assign the element and count if matches again , subtract one if not found the same selected element next.
                element = v[i];
                count = 1;
            }
            else if (v[i]==element){    //if the next element is same as current element then increase the count by 1
                count ++;
            }
            else{                       // if not then decrease the count by 1
                count --;
            }
        }

        int count2 = 0;
        for(int i = 0; i<n; i++){
            if(v[i]==element){      //if the last previous element in moore's voting algorithm is equal to the current element then increase the count2 by 1
                count2++;
            }
            if(count2>(n/2)){       //if count is greatern than half of the size of the array then return the element
                return element;
            }
        }
        return -1;      //--> when no majority element is found
    }
};

int main(){
    vector<int> a = {3,2,5,3,7,3,3,6,1,3,10,3,3};
    map<int,int> mpp;
    Better object;
    int res =object.MajorityEle(a);
    cout<<"Majority element repeated more than n/2 times is : "<<res<<endl;


    vector<int> b = {3,2,5,3,7,3,3,6,1,3,10,3,3};
    Optimal obj;
    int result = obj.majority(b);
    cout<<"Majority element repeated more than n/2 times using Moore's Voting Algorithm is : "<<result<<endl;
    return 0;

}
