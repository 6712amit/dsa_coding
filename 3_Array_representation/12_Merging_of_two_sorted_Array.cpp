#include<iostream>
using namespace std;
//combining two sorted list into one single sorted list
struct Array {
    int arr[20];
    int length;
    int size;
};

void mergeTwoArray(struct Array *arr1,struct Array *arr2){
    int i=0,j=0,k=0;
    struct Array *arr3=new Array;
  
while(i<arr1->length && j<arr2->length){
    if(arr1->arr[i]<arr2->arr[j])
       arr3->arr[k++]=arr1->arr[i++];
    else
    arr3->arr[k++]=arr2->arr[j++];
}
while(i<arr1->length)
arr3->arr[k++]=arr1->arr[i++];
while(j<arr2->length)
arr3->arr[k++]=arr2->arr[j++];
for(int l=0;l<arr2->length+arr1->length;l++)
cout<<arr3->arr[l]<<" ";
}
int main(){
struct Array ar={{2,4,5,6,7,8,12,15},8,20};
struct Array ar1={{1,3,6,8,9,11,21,29,33},9,20};
     mergeTwoArray(&ar,&ar1);
}