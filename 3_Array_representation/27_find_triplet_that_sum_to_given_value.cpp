#include<iostream>
#include<algorithm>
using namespace std;
void get_triplet_sum_to_given_value(int arr[],int n,int target){   // time complexity =O(n^3)
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"triplet found at indexes "<<i<<" , "<<j<<" , "<<"and "<<k<<endl;
                }
            }
        }
    }
}
 void get_triplet_sum_to_a_given_target(int arr[],int n,int target){  //time complexity =O(n^2);
     int right=n-1;
     int sum=0;
    for(int i=0;i<n;i++){
        int left=i+1;
       while(left<right){
           sum=arr[i]+arr[left]+arr[right];
           if(sum==target)
           cout<<"triplet found at indexes "<<i<<" , "<<left<<" , "<<"and "<<right;
           if(sum<target)
           left++;
           else
           right--;
       }
    }
 } 

int main(){
int arr[]={0,3,44,5,9,7};
int target=19;
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
get_triplet_sum_to_given_value(arr,n,target);
get_triplet_sum_to_a_given_target(arr,n,target);
}