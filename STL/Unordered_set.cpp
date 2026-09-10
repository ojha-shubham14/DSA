#include<bits/stdc++.h>
using namespace std;
int main(){
    //unordered set 
    unordered_set<int> us;          //all the other functions work the same for unordered_set as in set, since I've copied the structure from my set notes.
                                    //the ordering of elements is randomised (hash-based) and we don't know where the next element will be placed.
                                    //it is totally randomised — no sorted order like set/multiset.
                                    //lower_bound and upper_bound functions don't exist here because there's no sorted order to binary search on.

    cout<<"All the functions of unordered_set:\n";
    us.insert(1);
    us.insert(1);
    us.emplace(1);              //NOTE: unlike multiset, unordered_set does NOT store duplicates — all three calls insert the SAME single '1', the last two are no-ops
    for(auto a : us){
        cout<<a<<" ";
    }
    cout<<endl;

    us.erase(1);                //erases the single 1 (there's only ever one copy, since duplicates aren't stored)
    cout<<"after deletion:"<<endl;
    for(auto a : us){
        cout<<a<<" ";
    }
    cout<<endl;

    us.insert(1);
    us.insert(1);
    us.emplace(1);              //again, still just ONE '1' in the set after this

    //to delete a specific element via iterator instead of by value
    cout<<endl<<"elements in the unordered_set are:"<<endl;
    auto it = us.begin();           //we can use begin() or find() to get an iterator (end()-1 does NOT work — unordered_set iterators are forward-only, no '-' allowed)
    
    
    us.erase(it);


    cout<<"remaining elements: ";
    for(auto a : us){
        cout<<a<<" ";
    }
    cout<<endl;


    //erasing a range of elements

    us.insert(1);
    us.insert(3);
    us.insert(7);
    us.insert(9);
    us.insert(22);

    cout<<"elements in unordered_set us: "<<endl;
    for(auto a : us){
        cout<<a<<" ";
    }
    cout<<endl;

    //us.erase(us.find(1), us.find(1)+4)          //this won't work: '+' isn't defined on unordered_set iterators (they're only forward iterators, not even bidirectional).
    us.erase(us.begin(),next(us.begin(),3));       //so we do it this way instead — erases the first 3 elements in whatever order the hash table currently holds them.

    cout<<"remaining elements: ";
    for(auto a : us){
        cout<<a<<" ";
    }
    cout<<endl;
    


    //other functions like swap, empty, begin, end() work the same as with set/multiset
    return 0;
}