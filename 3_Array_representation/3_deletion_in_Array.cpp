#include<iostream>
using namespace std;
 struct Array{
        int length;
        int size;
        int arr[10];
    };
    void display(struct Array ar1){
    cout<<"elements are ";
    for(int i=0;i<ar1.length;i++){
        cout<<ar1.arr[i]<<" ";
    }
    }
    int search(struct Array *a,int value){
     for(int i=0;i<a->length;i++){
         if(a->arr[i]==value)
         return i;
     }
     return -1;
    }
    //delection by value
    void Deletion_in_Array(struct Array *a,int value){
        int index;
     index=search(a,value);
      for(int i=index;i<a->length-1;i++)
         a->arr[i]=a->arr[i+1]; 
         a->length--;
    }
int main(){
    struct Array ar={5,10,{1,2,3,4,5}};
    int value=3;
    cout<<"element found at index  "<<search(&ar,value)<<endl;
    Deletion_in_Array(&ar,value);
    display(ar);

}