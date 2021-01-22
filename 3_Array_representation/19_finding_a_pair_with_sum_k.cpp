#include<iostream>
using namespace std;
void Get_pair_with_sum_k(int arr[], int n,int k){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k)
        cout<<"("<<i<<","<<j<<")"<<endl;
    }
}
}
void Get_pair_with_sum_k_using_hashing(int arr[],int n,int k){
    int max,min;
    min=max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    int hash[max+1]={0};
    for(int i=0;i<n;i++){
        if(hash[k-arr[i]]==1)
        cout<<arr[i]<<","<<k-arr[i]<<"="<<k<<endl;
        hash[arr[i]]=1;
    }
}

int main(){
int arr[]={6,3,8,10,16,7,5,2,9,14};
int n=sizeof(arr)/sizeof(arr[0]);
//Get_pair_with_sum_k(arr,n,10);
Get_pair_with_sum_k_using_hashing(arr,n,10);
}