#include<iostream>
using namespace std;
 void Duplicate_of_sorted_array_using_hash(int arr[],int n){
     int max=arr[0];
      int min=arr[0];
  for(int i=0;i<n;i++){          //time = O(n); space= O(n);
      if(arr[i]>max)
      max=arr[i];
      if(min>arr[i])
      min=arr[i];
  }
  int hash[max+1]={0};
  for(int i=0;i<n;i++){
      hash[arr[i]]++;
  }
  for(int i=0;i<=max;i++){
      if(hash[i]>1)
      cout<<"duplicate elements "<<i<<" number of occurance "<<hash[i]<<endl;
  }
 }
 //finding duplicate in sorted array using previous pointer
 //take counter i scan through the list and check whether i+1(next element) is same as i(index) if not same move i++
 //if found display that element 
 //keep tract of last duplicate element.
 void get_duplicate_in_sorted_array(int arr[],int n){
     int last_duplicate;
     for(int i=0;i<n;i++){
         if(arr[i]==arr[i+1] && arr[i]!=last_duplicate){
          last_duplicate=arr[i];
          cout<<"duplicate element ="<<arr[i]<<endl;
          }
     }
 }
 // printing duplicate element and counting number of occurance without using hash
 void print_duplicate_And_its_occurance(int arr[],int n){
     int i,j;
     for(i=0;i<n;i++){
         if(arr[i]==arr[i+1]){
          j=i+1;
          while(arr[i]==arr[j]){
               j++;
          } 
          cout<<"duplicate_element = "<<arr[i]<<" occurance = "<<j-i<<endl;
          i=j-1;  
         }
     }
 }
int main(){
int arr[]={3,6,8,8,10,12,15,15,15,20};
int n=sizeof(arr)/sizeof(arr[0]);
//Duplicate_of_sorted_array_using_hash(arr,n);
//get_duplicate_in_sorted_array(arr,n);
print_duplicate_And_its_occurance(arr,n);
}