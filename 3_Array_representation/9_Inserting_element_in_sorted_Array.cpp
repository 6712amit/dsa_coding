#include<iostream>
using namespace std;
 int * Inserting_In_a_sorted_Array(int arr[],int n,int x){
int i;
for(i=n-1;arr[i]>x;i--)
arr[i+1]=arr[i];

arr[i+1]=x;
return arr;
}
int main(){
int arr[10]={4,8,13,16,20,25,28,33};
int  *p=Inserting_In_a_sorted_Array(arr,8,18);
for(int i=0;i<9;i++)
cout<<p[i]<<" ";

}