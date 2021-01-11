#include<iostream>
using namespace std;

int * seperate_negatve_possitive(int arr[],int n){
    int i=0,j=n-1;
   while(i<j){
    while(arr[i]<0)
    i++;
    while(arr[j]>=0)
    j--;
    if(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
    }
    return arr;
}
int main(){
    int arr[10]={2,-3,4,-5,-6,7,8};
     int *p= seperate_negatve_possitive(arr,7);
     for(int i=0;i<7;i++)
     cout<<p[i]<<" ";
}