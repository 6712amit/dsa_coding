#include<iostream>
using namespace std;

int main(){
// ways of initializing array
int a[5];
a[0]=12;
a[1]=15;
a[2]=25;
cout<<sizeof(a)<<endl;//
cout<<a[1]<<endl;
printf("%d\n",a[2]); // we can also use printf if the compiler gives error then include #include<stdio.h> in header;
/*
output
20
15
25
*/
int a1[10]={2,4};
cout<<sizeof(a1)<<endl; //if we intialize few element then rest all element is initialized with zero;
cout<<a1[2]<<endl;     
cout<<a1[3]<<endl;
/*
output
40
0
0
*/
int a2[10]={0};  // if we write  a[10]={0}; all 10 index will be initialized with zero;
for(int x:a2)   // for each loop;
cout<<a2[x]<<" ";
// we can also take input from user then initialize it;

int k;
cout<<"enter size of array";
cin>>k;
int a3[k];
a3[0]=2; // first 2 will print then rest garbage value will be printed;
for(int m=0;m<k;m++)
cout<<a3[m]<<" ";

}