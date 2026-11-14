#include<bits/stdc++.h>
using namespace std;

class Bruteforce{       //TC: O(N2) & SC: O(1)
    public:
    int reversePairs(vector<int> & nums){
        int n = nums.size();
        int count  = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = i+1; j<n; j++){
                if(nums[i]> 2LL* nums[j]){
                    count ++;
                }
            }
        }
        return count;
    }
};

class Optimal{      //TC: O(n log n)+O(n log n) = O(n log n)   SC: O(n)+O(log n)
    public:
    void merge(vector<int> & nums, int low ,int mid , int high){
        int left = low;
        int right = mid+1;
        vector<int> temp;

        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i = low ; i<=high; i++){
            nums[i] < temp[i-low];
        }
    }
    int countPairs(vector<int> & nums , int low, int mid , int high){
        int count = 0;          //to count the number of pairs we have which are greater then nums[i]>nums[right]
        int right = mid+1;      //pointer to the rightside subarray of the main array

        for(int i = low ; i<=mid ; i++){        //this loop iterates through all the elements present in the left subArray and checks the condition of this " nums[i]>nums[right] " with the right sub array
            while(right <= high && nums[i]> 2LL * nums[right]){
                right++;
            }
            count += (right - (mid+1));
        }
        return count;
    }

    int mergesort(vector<int> & nums , int low , int high){
        int count = 0;
        if(low>=high) return count;
        int mid = low + (high-low)/2;
        count += mergesort(nums,low,mid);
        count += mergesort(nums,mid+1,high);
        count += countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return count;
    }

    int reversePairs(vector<int> & nums){
        int n = nums.size();
        return mergesort(nums,0,n-1);
    }
};