#include<iostream>
using namespace std;

//when elements are not first natural sequence may be starting from any point
void get_single_missingNumber(int arr[],int n){
    // we take help of index in finding this subtract from value-index;
    int diff;
    int index=0;
    int missing_num=0;
    if((arr[0]-index)==(arr[1]-(index+1)))
      diff=(arr[0]-index);
    else
        diff=arr[2]-(index+2);
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
            missing_num=i+diff;
            break;
        }
    }
    cout<<"missing number= "<<missing_num<<" ";  
}
int main(){
int arr1[]={6,7,8,9,10,11,13,14,15,16,17};
int m=sizeof(arr1)/sizeof(arr1[0]);
get_single_missingNumber(arr1,m);
}