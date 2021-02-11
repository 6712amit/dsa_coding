// Input : arr = {2, 3, 10, 6, 4, 8, 1}
// Output : 8
// Explanation : The maximum difference is between 10 and 2.

// Input : arr = {7, 9, 5, 6, 3, 2}
// Output : 2
// Explanation : The maximum difference is between 9 and 7.
#include<iostream>
using namespace std;
void getMaxDiff_by_naive_approach(int arr[],int n){
    int currmax=INT32_MIN;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]&& currmax<arr[j]-arr[i])
        currmax=arr[j]-arr[i];
    }
}
cout<<" max diff by naive approach = "<<currmax<<endl;
}
void getMaxDiff(int arr[],int n){             // time complexity = O(n)
  int maxDiff_so_far=arr[1]-arr[0];           // space complexity = O(1);
  int min_element_so_far=arr[0];
  for(int i=1;i<n;i++){
      if(arr[i]-min_element_so_far>maxDiff_so_far)
      maxDiff_so_far=arr[i]-min_element_so_far;
      if(min_element_so_far>arr[i])
      min_element_so_far=arr[i];
  }
  cout<<"maximum difference such that smaller element occurs before larger number = "<<maxDiff_so_far<<endl;
}
void getMaxDiffByExtraArray(int arr[],int n){
    int diff[n];
    int currdiff=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        diff[i]=arr[i+1]-arr[i];
    }

    for (int i = 1; i < n-1; i++)
    {
        if(diff[i-1]>0)
        diff[i]=diff[i-1]+diff[i];
        if(diff[i]>currdiff){
            currdiff=diff[i];
        }
    }
    cout<<"maximum difference="<<currdiff;  
    
}
int main(){
    //int arr[]={2, 3, 10, 6, 4, 8, 1};
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    getMaxDiff(arr,n);
    getMaxDiff_by_naive_approach(arr,n);
    getMaxDiffByExtraArray(arr,n);

}