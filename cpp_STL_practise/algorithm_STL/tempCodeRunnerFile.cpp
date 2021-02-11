#include<iostream>
using namespace std;
int Maximum_diff(int arr[],int n){
    int diff[n];

    for(int i = 0; i < n-1; i++){
        diff[i]=arr[i+1]-arr[i];
    }
    int currdif=diff[0];
    for(int i = 1; i < n-1; i++){
       if(diff[i-1]>0)
       diff[i]=diff[i-1]+diff[i];
       if(diff[i]>currdif)
       currdif=diff[i];
    }
    return currdif;

}
int main(){
int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<Maximum_diff(arr,n);
return 0;
}
