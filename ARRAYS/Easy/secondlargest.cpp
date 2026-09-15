#include<bits/stdc++.h>
using namespace std;
void maxElement(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){       //can't do sizeof(arr); it's a classic trap.
                                //sizeof(arr), when we pass array into the fucntion then 
                                //behaves like a pointer and sizeof() just tells how big 
                                //the pointer is , in 64bit system , every pointer is of 8 bits
                                //no matter how many element does it contain
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element of the array is : "<<max<<endl;
}
int main(){
    vector<int> v ={2,5,1,3,0};
    auto it1 = v.begin();
    auto it2 = v.end();
    int maxi = *max_element(it1,it2);
   
    v.erase( remove(v.begin(),v.end(),maxi),v.end());               /*
                                                                    remove(v.begin(),v.end(),maxi)
                                                                    checks for the specefic number which has
                                                                    been passed to it, remove compares each element
                                                                    with the passed element, if it not matched then
                                                                    it keeps as it is and if matches with any element
                                                                    then the element which is matched is 'over written'
                                                                    by the element which is next to it. and the new logical 
                                                                    end would be the second last element. and returns an
                                                                    iterator.(preserving it's actual size )
                                                                    The vector v = {2, 5, 1, 3, 0} becomes :{2, 1, 3, 0, 0}
                                                                    after applying remove() part

                                                                    .erase(remove(_,_,_),v.end())
                                                                    when this is passed then,Eemove gives an iterator where the 
                                                                    second last element or the end() is present after remove 
                                                                    remove function, and the actual end() of the size of the 
                                                                    original vector, now erase removes the element which is 
                                                                    present in this range [that is : (start,end]  
                                                                    
                                                                    */
    maxi = *max_element(it1,it2);
    cout<<"maximum element of the vector v is:"<<maxi<<endl<<endl;

    return 0;
}