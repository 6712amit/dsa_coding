#include<iostream>
using namespace std;
void get_equilibrium_index_in_a_array(int arr[],int n){ // time complexity = O(n^2);
    int leftSum=0;
    for(int i=0;i<n;i++){
        int rightSum=0;
        leftSum=leftSum+arr[i];
        for(int j=n-1;j>i;j--){
           rightSum=rightSum+arr[j];
        }
        if(leftSum==rightSum){
        cout<<"equilibrium index = "<<i<<endl;
        break;
        }
    }
}
void get_equilibrium_index(int arr[],int n){ //time complexity=O(n) 
    int leftSum[n];
    int rightSum[n];
    int lsum=0;
    int rsum=0;
    int j;
    int flag=0;
    for(int i=0,j=n-1;i<n;i++,j--){
        lsum+=arr[i];
        leftSum[i]=lsum;
        rsum+=arr[j];
        rightSum[j]=rsum;
    }
    int k;
    for(k=0;k<n;k++){
        if(leftSum[k]==rightSum[k+1]){
        flag=1;
        break;}
        }
        if(flag==1)
        cout<<"equilibruim index found at = "<<k;
        else
        cout<<"euilibrium index does not exist";
    
}

int main(){
   int arr[]={10,5,15,3,4,21,2};
int n=sizeof(arr)/sizeof(arr[0]); 
//get_equilibrium_index_in_a_array(arr,n);
get_equilibrium_index(arr,n);
}