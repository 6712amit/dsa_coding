#include<iostream>
using namespace std;
//majority elemnt is that element that element which occurs more than half of the array element;
//if array size is n then the element that occurs n/2+1 times that is the majority element;
//arr[]={1,1,1,1,2,3} 
//if arr[i]==arr[i+n/2] in sorted array then that number is majority element
void get_majority_element(int arr[],int n){
  for(int i=0;i<=n/2;i++)                           //time =O(nlogn) //sorting takes if element not sorted;
   if(arr[i]==arr[i+n/2])
   cout<<"majority element = "<<arr[i];
}
// using moore voting algorithm 
int get_majority_element_using_moore_voting_algorithm(int arr[],int n){
    int majorityIndex=0,votes=1;
    for(int i=1;i<n;i++){              //time complexity =O(n) no need of sorting.
        if(arr[majorityIndex]==arr[i])
        votes++;
        else
        votes--;
        if(votes==0){
            majorityIndex=i;
            votes=1;
        }
    }
    return arr[majorityIndex];
}
int is_Majority_Element(int arr[],int size, int majorityElement){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==majorityElement)
        count++;
    }
    return (count>size/2);
}
int main(){
//int arr[]={1,1,1,1,2,2,2};         //for sorted array
int arr[]={1,2,5,1,5,5,6,5,5,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
//get_majority_element(arr,n);
int majorityElementCandidate=get_majority_element_using_moore_voting_algorithm(arr,n);
if(is_Majority_Element(arr,n,majorityElementCandidate))
cout<<"majority element = "<<majorityElementCandidate;
else
cout<<"no majority element";

}