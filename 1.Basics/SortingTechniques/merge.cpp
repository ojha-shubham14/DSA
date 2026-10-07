#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int low,int high){
    if(low<=high){
        int mid = (high+low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
    }
}
void merge(int a[],int low,int mid,int high){

}