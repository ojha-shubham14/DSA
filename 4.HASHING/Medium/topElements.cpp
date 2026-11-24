#include<bits/stdc++.h>
using namespace std;

class Better{
    public:
    vector<int> topElements(vector<int> &nums, int k){
        int n = nums.size();
        //Approach: We will store the occurences of element and the element itself in Map and from there we will push all elements in Auxillary vector<pair<int,int>> and from there we will only have the top K elements and push it in answer vector.
        vector<int> answer;
        vector<pair<int,int>> auxillary;
        unordered_map <int,int> mapp;                 //to store the element and it's occurrences.

        
        for(auto it: nums){
            mapp[it]++;                               //now all the elements are inserted in the form of Keys:Values
        }

        //inserting all the Values and Keys in the Auxillary vector so that we can Sort the vector beased on the first int from vector<int,int>.
        for(auto it: mapp){
            auxillary.push_back({it.second,it.first});                    //pushing it.second that is the frequencies first and then the keys because we want to sort based on the frequency not the keys and the sort function sorts based on whichever is present in the front of the container.
        }

        sort(auxillary.rbegin(),auxillary.rend());

        for(int i=0; i<k ; i++){
            answer.push_back(auxillary[i].second);                      //auxillary[i] points to the first set of <int,int> and we want the keys i.e, the second "int" so auxillary[i].second
        }

        return answer;
    }
};

int main(){
    Better obj;
    vector<int> inp = {1,1,1,3,3,2,2,2,2,4,4};
    int k =2;
    vector<int> answer;
    answer = obj.topElements(inp,k);

    for(auto it: answer){
        cout<<it<<" ";
    }
    return 0;
}