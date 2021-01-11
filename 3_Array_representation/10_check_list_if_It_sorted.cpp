#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1])
    return false;
    }
    return true;
}
int main(){
    int arr[10]={2,3,4,5,6,7,8};
     if(isSorted(arr,7))
     cout<<"sorted";
     else
     cout<<"not sorted";
}