#include<iostream>
#include <algorithm>
using namespace std;
int compare(int a,int b){
    if(a<b)
    return 1;
    else 
    return 0;
}
void Closest_sum_to_zero(int arr[],int n){
    int l_index=0;                              // time complexity =O(nlogn) that is taken by sorting the array is it is not sorted 
    int r_index=n-1;                             // if alredy sorted array is given then only O(n) is time complexity
    int min_l_index;
int min_r_index;
int currSum;
int closestSum=INT32_MAX;
while(l_index<r_index){
    currSum=arr[l_index]+arr[r_index];
    if(abs(currSum)<abs(closestSum)){
        closestSum=currSum;
        min_l_index=l_index;
        min_r_index=r_index;
    }
    if(currSum<0)
    l_index++;
    else
    r_index--;
}
cout<<"closest to zero index "<<min_l_index<<" and "<<min_r_index<<" = "<<closestSum<<endl;
}
int main(){
int arr[] = {1, 60, -10, 70, -80, 85};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n,compare);
Closest_sum_to_zero(arr,n);
}
