

#include<iostream>
using namespace std;
struct Array{
    int arr[20];
    int length;
    int size;
};
int BinarySearch(struct Array *ar,int key){
    int left,right,mid;
    left=0;right=ar->length-1;
    
    while(left<=right){
        mid=(left+right)/2;
        if(ar->arr[mid]==key)
        return mid;
        else if(key>ar->arr[mid])
        left=mid+1;
        else
            right=mid-1;  
    }
    return -1;
}
int R_binary_search(struct Array *ar,int key,int left,int right){
    int mid=0;
    if(left<=right){
     mid=(left+right)/2;
if(ar->arr[mid]==key)
return mid;
else if(key>ar->arr[mid])
return R_binary_search(ar,key,mid+1,right);
else
    return R_binary_search(ar,key,left,mid-1);
    }
return -1;
}
int main(){
    struct Array arr={{4,8,10,15,18,21,24,27,29,33,34},11,20};
  //int x= BinarySearch(&arr,27);
  int x=R_binary_search(&arr,27,0,10);
  if(x!=-1)
  cout<<"element found at "<<x;
  else
  cout<<"element not found";
}