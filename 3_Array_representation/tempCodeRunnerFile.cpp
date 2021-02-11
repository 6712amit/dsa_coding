#include<iostream>
using namespace std;
 void append(int arr[],int *len,int value){
   arr[(*len)++]=value;
}
int main(){
int arr[100];
int len=0;
append(arr,&len,25);
append(arr,&len,35);
append(arr,&len,45);
append(arr,&len,32);
append(arr,&len,75);

for(int i=0;i<len;i++)
cout<<arr[i]<<" ";
return 0;
}
