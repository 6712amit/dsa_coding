#include<iostream>
using namespace std;
void Closest_sum_to_zero(int arr[],int n){
    int l_index=0;                              // time complexity =O(nlogn) that is taken by sorting the array is it is not sorted 
                                                //here we have taken already sorted array 
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
int arr[] = {-80,-10,1,60, 70,85};
int n=sizeof(arr)/sizeof(arr[0]);
Closest_sum_to_zero(arr,n);
}
