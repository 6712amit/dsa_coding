#include<iostream>
using namespace std;
void Get_Single_Misssing_Number(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
     int total=n*(n+1)/2;
    int Missing_num=total-sum;
    cout<<" missing number= "<<Missing_num<<endl;
}
int main(){
int arr[]={1,2,3,5,6,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
Get_Single_Misssing_Number(arr,n+1);
}