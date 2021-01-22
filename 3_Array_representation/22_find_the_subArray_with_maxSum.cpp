#include<iostream>
using namespace std;
void get_subArray_with_maximum_sum(int arr[],int n){
    int max_so_far=INT32_MIN;
    int max_ending_here=0;                 //time complexity = O(n); 
    int start,end,s;                       // space complexity = O(1);
    start=end=s=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here>max_so_far){
            max_so_far=max_ending_here;
            start=s;
            end=i;
        }
        if(max_ending_here<0){
            max_ending_here=0;
            s=i+1;
        }
    }
    cout<<"maximum subarray sum is = "<<max_so_far<<" starting from index "<<start<<" to index "<<end;
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
get_subArray_with_maximum_sum(arr,n);
}