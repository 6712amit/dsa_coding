#include<iostream>
using namespace std;
struct Array{
    int arr[10];
    int length;
    int size;
};
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
int linear_search_optimized(struct Array *ar,int key){
for(int i=0;ar->length;i++){
    if(ar->arr[i]==key){
        swap(&ar->arr[i],&ar->arr[0]);
        return i;
    }
}
return -1;
}
int main()
{
    struct Array arr={{2,23,14,5,6,9,8,12},8,10};
    
     int x=linear_search_optimized(&arr,5);
     if(x>-1)
     cout<<"element found at"<<x;
     else
         cout<<"element not fount";
     
    
    return 0;
}
