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
int get(struct Array *ar,int index){
    if(index>0 && index <ar->length)
    return ar->arr[index];
    return -1;
}
void set(struct Array *ar,int index,int value){
    if(index>0 &&index<ar->length)
    ar->arr[index]=value;
}
int max(struct Array *ar){
    int max=ar->arr[0];
    for(int i=0;i<ar->length;i++)
    if(ar->arr[i]>max)
    max=ar->arr[i];
    return max;
}
int min(struct Array *ar){
    int min=ar->arr[0];
    for(int i=0;i<ar->length;i++)
    if(ar->arr[i]<min)
    min=ar->arr[i];
    return min;
}
float Average(struct Array *ar){
    float avg=0.0;
    for(int i=0;i<ar->length;i++)
    avg=avg+ar->arr[i];
    avg=avg/ar->length;
    return avg;
}
int Sum(struct Array *ar){
    int sum=0;
    for(int i=0;i<ar->length;i++)
    sum=sum+ar->arr[i];
    return sum;
}

int main(){
struct Array arr={{2,3,9,16,18,21,28,5},8,20};
cout<<"sum is="<<Sum(&arr)<<endl;
cout<<"minimum number is="<<min(&arr)<<endl;
cout<<"maximum number is="<<max(&arr)<<endl;
cout<<"Average is="<<Average(&arr)<<endl;
cout<<"number at 5th index="<<get(&arr,5)<<endl;
set(&arr,5,10);
display(arr);



}