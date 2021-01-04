#include<iostream>
using namespace std;
 struct Array{
        int length;
        int size;
        int *arr;
    };
void display(struct Array ar1){
    cout<<"elements are ";
    for(int i=0;i<ar1.length;i++){
        cout<<ar1.arr[i]<<" ";
    }
}
void Append(struct Array *a,int x){
if(a->length<a->size)
 a->arr[a->length++]=x;
}
void Insert(struct Array *a,int index,int value){
  if(index<a->length && index>0)
  for(int i=a->length;i>index;i--){
      a->arr[i]=a->arr[i-1];
  }
  a->length++;
  a->arr[index]=value;
}
int main(){
   struct  Array ar;
   cout<<"enter the size of array";
   cin>>ar.size;
   cout<<"enter the length of the arrays";
   cin>>ar.length;
   ar.arr=new int[ar.size];
   cout<<"enter the elements of array ";
   for(int i=0;i<ar.length;i++){
       cin>>ar.arr[i];
   }
   int x,index,value;
   cout<<"enter the value to be appended";
   cin>>x;
   cout<<"enter the index and value respt. for insertion";
   cin>>index>>value;
   Append(&ar,x); 
   Insert(&ar,index,value);
   display(ar);

}