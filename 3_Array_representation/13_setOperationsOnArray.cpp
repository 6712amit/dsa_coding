
#include<iostream>
using namespace std;
struct Array {
    int arr[20];                                                      //when two array are provided we need to copy element of 2nd 
    int length;                                                     //array but if element of 2nd
    int size;                                                        // array already present in 1st array then don't copy it.
};
// searching for element;
bool search(struct Array *ar1,int key){
    for(int i=0;i<ar1->length;i++)
    if(ar1->arr[i]==key)                                               // time complexity =O(n^2);
    return true;                                                       //space =O(n); space can be O(1)if we store in 1st array itself.
    return false;
}
void UnionOfTwoArray(struct Array *arr1, struct Array *arr2){   
       int x=arr1->length; //taking length of first array so that we can start from here for 2nd array;
       struct Array *arr3=new Array;    
       for(int i=0;i<arr1->length;i++)
       arr3->arr[i]=arr1->arr[i];  

       arr3->length=x;
       for(int i=0;i<arr2->length;i++){
        int temp=arr2->arr[i];
        if(search(arr3,temp)==false)
        {
        arr3->arr[x++]=arr2->arr[i];
        arr3->length++;
        }
    }
for(int i=0;i<arr3->length;i++)
cout<<arr3->arr[i]<<" ";
}
//efficient approch for union
void UnionForSortedArray(struct Array *arr1,struct Array *arr2){    //if do sorting then it will take O(nlogn) and O(n) for merging 
   struct Array *arr3=new Array;                                    // so O(nlogn) is time complexity
   int i=0,j=0,k=0;                                                 // space complexity=O(n).
   arr3->length=0;
   while(i<arr1->length && j< arr2->length){
     if(arr1->arr[i]==arr2->arr[j])
     {i++; j++; }
     else if(arr1->arr[i]<arr2->arr[j]){
     arr3->arr[k++]=arr1->arr[i++];
     arr3->length++;
     }
      else{
       arr3->arr[k++]=arr2->arr[j++];
       arr3->length++;}
   }
   while(i<arr1->length){
   arr3->arr[k++]=arr1->arr[i++]; 
   arr3->length++;}
   while(j<arr2->length){
   arr3->arr[k++]=arr2->arr[j++];
   arr3->length++;}

   for(int l=0;l<arr3->length;l++)
   cout<<arr3->arr[l]<<" "; 
}

 void Intersection(struct Array *arr1,struct Array *arr2){ //comman in both array
 struct Array *arr3=new Array; 
 int i=0,j=0,k=0;
 arr3->length=0;
 while(i<arr1->length && j< arr2->length){
     if(arr1->arr[i]==arr2->arr[j])
     {arr3->arr[k++]=arr1->arr[i++];
         j++; 
         arr3->length++;
         }
     else if(arr1->arr[i]<arr2->arr[j]){
     i++;
     }
      else{
       j++;}
   }
   for(int l=0;l<arr3->length;l++)
   cout<<arr3->arr[l]<<" "; 
}
void Difference(struct Array *arr1,struct Array *arr2){    //we want all those element of B that is not present in B         
struct Array *arr3=new Array;
int i=0,j=0,k=0;
while(i<arr1->length && j<arr2->length){
    if(arr1->arr[i]<arr2->arr[j])
    arr3->arr[k++]=arr1->arr[i++];
    else if(arr2->arr[j]<arr1->arr[i])
    j++;
    else
    {
        i++;j++;
    }  
}
while(i<arr1->length)
arr3->arr[k++]=arr1->arr[i++];
for(int l=0;l<k;l++)
cout<<arr3->arr[l]<<" ";
}
int main(){
struct Array ar={{2,3,5,21,8,6},6,20};
struct Array ar2={{1,6,8,27,2},5,20};
struct Array ar3={{2,9,21,28,35},5,20};
struct Array ar4={{2,3,9,18,28},5,20};
UnionOfTwoArray(&ar,&ar2);
cout<<endl;
UnionForSortedArray(&ar3,&ar4);
cout<<endl;
Intersection(&ar3,&ar4);
cout<<endl<<"difference"<<endl;
Difference(&ar3,&ar4);
}
