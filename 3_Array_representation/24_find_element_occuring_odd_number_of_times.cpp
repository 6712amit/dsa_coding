#include<iostream>
using namespace std;
// there exist one one element in the list that occurs odd number of times 
// example: input 3 2 1 2 3 2 1
// output : 3 
// explanation since 3 is the only elemnt that is occuring odd number of times 
// there are three methods by which we can do this 
// 1st using two for loop 
// 2nd using hash table 
// 3rd using Xor concept.

void finding_odd_by_Xor(int arr[],int n){
    int result=0;
for(int i=0;i<n;i++){
  result=result^arr[i];
}
cout<<"odd number by xor = "<<result<<endl;
}
 void finding_odd_by_Naive_method(int arr[], int n){
for(int i=0;i<n-1;i++){
     int count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j])
        count++;
    }
    if(count%2!=0){
        cout<<"number that occured odd number of times by naive appraoch= "<<arr[i]<<endl;
        break;
    }
}
 }
void finding_odd_by_hash(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
 for(int i=0;i<n;i++){
     if(max<arr[i])
     max=arr[i];
     if(arr[i]<min)
     min=arr[i];
 }
 int hash[max+1]={0};
 for(int i=0;i<n;i++)
 hash[arr[i]]++;
 for(int i=min;i<=max;i++)
 if(hash[i]%2!=0)
 cout<<"number that occured odd number of times using hash = "<<i<<endl;
 }
int main(){
int arr[]={3,2,1,2,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
finding_odd_by_hash(arr,n);
finding_odd_by_Naive_method(arr,n);
finding_odd_by_Xor(arr,n);
}