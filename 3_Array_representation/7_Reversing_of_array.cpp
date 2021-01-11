#include<iostream>
using namespace std;
struct Array{
    int arr[20];
    int length;
    int size;
};
void display(struct Array ar){
    int i;
    cout<<"elements are"<<endl;
    for(int i=0;i<ar.length;i++){
        cout<<ar.arr[i]<<" ";
    }
}
void swap(int *x,int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
void ReverseArray(struct Array *ar){
  for(int i=0,j=ar->length-1;i<j;i++,j--){
      swap(ar->arr[i],ar->arr[j]);
  }
}
 int main(){
     struct Array Arr={{8,3,9,15,6,10,7,2,12,4},10,20};
     display(Arr);
     ReverseArray(&Arr);
     display(Arr);
 }