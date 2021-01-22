#include<iostream>
using namespace std;
void Get_duplicate_and_its_occurance_in_unsorted_array(int arr[],int n){
    int count;
    for(int i=0;i<n-1;i++)                        //time =  O(n^2)
    {
        count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }  
        }
        if(count>1)
            cout<<arr[i]<<" no of occurances= "<<count<<endl;
    }
}

void Get_duplicate_and_its_occurance_in_unsorted_array_using_hash(int arr[],int n){
    int max=arr[0];
        int min=arr[0];                                   //time=O(n);
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    int hash[max+1]={0};
    for(int i=0;i<n;i++)
    hash[arr[i]]++;
    for(int i=min;i<max+1;i++)
    if(hash[i]>1)
    cout<<i<<" no of occurance = "<<hash[i]<<endl;
}

int main(){
int arr[]={8,3,6,4,6,5,6,8,2,7};
int n=sizeof(arr)/sizeof(arr[0]);
//Get_duplicate_and_its_occurance_in_unsorted_array(arr,n);
Get_duplicate_and_its_occurance_in_unsorted_array_using_hash(arr,n);
}