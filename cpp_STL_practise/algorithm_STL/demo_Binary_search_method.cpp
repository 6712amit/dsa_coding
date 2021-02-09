#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={0,1,2,2,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    auto it=binary_search(arr,arr+n,key);
    if(it!=false)
    cout<<"key is found";
    else
    cout<<"key is not found";
    cout<<endl;
    //to get the index of the element 
    // we use lower_bound or upper_bound
    // lower bound return the address of the the first element equal to the key element
    // uper return the address of the just greater element equal to the key
    auto lb=lower_bound(arr,arr+n,key);
    auto ub=upper_bound(arr,arr+n,key);
    cout<<"address of lower bound of 2 is "<<lb-arr<<endl;
    cout<<"occurance of frequency of 2 is "<<ub-lb<<endl;
    cout<<"address of upper bound of 2 is "<<ub-arr<<endl;

    return 0;
}