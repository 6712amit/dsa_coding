#include<stdio.h>
#include<iostream>
using namespace std;
// fibonacci series without memization:
// go on adding the last two number 
//ex= 0,1,1,2,3,5,8,13,21.....
// in recursion we call two times the recursively for last two numbers
// return fib(n-2)+fib(n-1) 
int fib(int n){
    if(n==0||n==1)
    return n;
    return fib(n-2)+fib(n-1);
}

// fibnocci series using memoization
//memoization is a important concept here we store the value of recursive calls so that we need not call 
//again and again which has alredy been called once
int arr[10];
int fibByMemoization(int n,int *arr){
  if(n<=1){
      arr[n]=n;
  return arr[n];
  }
  else
  {
      if(arr[n-2]==-1)
      arr[n-2]=fibByMemoization(n-2,arr);
      if(arr[n-1]==-1)
      arr[n-1]=fibByMemoization(n-1,arr);
      return arr[n-2]+arr[n-1];
  }
  

}
int main()
{
     int x;
    cout<<"enter the number";
    cin>>x;
    int *arr=new int[x];
    for(int i=0;i<x;i++){
        arr[i]=-1;
    }
   cout<<"fibnocci series upto "<<x<<"="<<fib(x)<<endl; 
   cout<<"fibonacci series by memoization="<<fibByMemoization(x,arr)<<endl;
}
