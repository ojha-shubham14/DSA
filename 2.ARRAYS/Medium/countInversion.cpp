#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    long long CountInversion(vector<int> & nums){
        int n = nums.size();
        long long count = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n; j++){
                if(i<j && nums[i]>nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

class Optimal{
    public:
    long long Merge(vector<int> & nums, int low, int mid , int high){
        int left = low;     //a pointer which is at low and of the Left Subarray
        int right = mid + 1;        //a pointer right which is at mid+1(that is 0th position) of right sub array
        long long count = 0 ;
        vector<int> temp;

        while(left<=mid && right <= high){
            if(nums[left]>nums[right]){
                temp.push_back(nums[left]);
                left ++;
            }
            else{
                temp.push_back(nums[right]);
                right++;

                //count inversion 
                count += (mid-low)+1;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left ++;
        }

        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low ; i<=high; i++){
            nums[i] = temp[i-low];
        }
        return count;
    }

    long long int mergeSort(vector<int> & nums, int low , int high){
        if(low>=high) return 0;
        long long count = 0;
        long long mid = (low+high)/2;
        count+= mergeSort(nums,low,mid);
        count+= mergeSort(nums,mid+1,high);\
        count+= Merge(nums,low,mid,high);

        return count;
    }

    long long NumberOfInversion(vector<int> & nums){
        int n = nums.size();
        mergeSort(nums,0,n-1);
    }
};