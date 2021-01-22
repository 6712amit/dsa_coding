#include<iostream>
using namespace std;
void Get_pair_with_sum_k_in_sorted_array(int arr[], int n,int k){
int i=0,j=n-1;
while(i<j){
    if(arr[i]+arr[j]>k)
    j--;
    else if(arr[i]+arr[j]==k){
        cout<<arr[i]<<","<<arr[j]<<"="<<k<<endl;
        j--;i++;
    }
    else
       i++;
}
}
int main(){
int arr[]={1,3,4,5,6,8,9,10,12,14};
int n=sizeof(arr)/sizeof(arr[0]);
Get_pair_with_sum_k_in_sorted_array(arr,n,10);
}