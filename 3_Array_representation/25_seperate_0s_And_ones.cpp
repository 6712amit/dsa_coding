#include<iostream>
using namespace std;
void seperate_0_and_1(int arr[],int n){
    int i=0;
    int j=n-1;
while(i<j){
    if(arr[i]==0){
        i++;
    }
    if(arr[j]==1)
    j--;
    if(arr[i]==1&& arr[j]==0)
    {
        int temp;
         temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main(){
int arr[]={0,1,1,0,1,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
seperate_0_and_1(arr,n);
}