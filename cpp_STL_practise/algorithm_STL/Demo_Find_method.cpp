#include<iostream>
using namespace std;
#include<algorithm>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,14,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    auto it=find(arr,arr+n,14);
    auto index=it-arr;
    if(index==n){
        cout<<"not found";
    }
    else
    cout<<"found at index "<<index<<endl;
    return 0;
}
