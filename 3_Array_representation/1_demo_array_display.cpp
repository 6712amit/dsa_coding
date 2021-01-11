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
int main(){
   struct  Array ar;
   
   cout<<"enter the size of array";
   cin>>ar.size;
   cout<<"enter the length of the arrays";
   cin>>ar.length;
   cout<<"enter the elements of array ";
   for(int i=0;i<ar.length;i++){
       cin>>ar.arr[i];
   }
   display(ar);
   
}