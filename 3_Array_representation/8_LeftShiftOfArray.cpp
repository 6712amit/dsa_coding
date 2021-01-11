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
void LeftShftOfArray(struct Array *ar)
{ int i;
    for(i=1;i<=ar->length;i++)
    ar->arr[i-1]=ar->arr[i];
    ar->arr[i]=0;
}
void leftRotate(struct Array *ar){
  int temp;
  int i;
  for(i=0;i<ar->length;i++){
  if(i==0)
  temp=ar->arr[i];
  else
  ar->arr[i-1]=ar->arr[i];
  }
  ar->arr[i-1]=temp;
}
void LeftShiftUpto(struct Array *ar,int x){
   int len=ar->length-x;
   for(int i=0;i<len;i++)
   ar->arr[i]=ar->arr[x++];
   for(int i=len;i<ar->length;i++)
   ar->arr[i]=0;
}
int main(){
    struct Array Arr={{1,2,3,4,5},5,10};
   // LeftShftOfArray(&Arr);
    //display(Arr);
     //LeftShiftUpto(&Arr,3);
     display(Arr);
     leftRotate(&Arr);
     display(Arr);

}