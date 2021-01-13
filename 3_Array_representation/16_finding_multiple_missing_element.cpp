#include<iostream>
using namespace std;
void get_multiple_missing_element(int arr[],int n){
    int diff=arr[0]-0;
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
            while(i+diff<arr[i]){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}
//efficient approach using hashing used for sorted and unsorted array both
void get_missing_using_hashing(int arr[],int n){
    int max=arr[0];int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    int Hash[max]={0};
    for(int i=0;i<n;i++){
        Hash[arr[i]]++;
    }
    for(int i=min;i<max;i++){
        if(Hash[i]==0)
        cout<<i<<" ";
    }
}
int main(){
int arr[]={6,7,8,9,11,12,15,16,17,18,20};
int n=sizeof(arr)/sizeof(arr[0]);
//get_multiple_missing_element(arr,n);
get_missing_using_hashing(arr,n);
}