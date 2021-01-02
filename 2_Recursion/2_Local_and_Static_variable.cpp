#include<iostream>
using namespace std;
int Using_local_variable(int n){
if(n>0){
    return Using_local_variable(n-1)+n;
}
return 0;
}
int Using_static_variable(int n){
static int x=0;
if(n>0){
    x++;
    return Using_static_variable(n-1)+x;
}
return 0;
}
int main(){
int x;
cout<<"enter the value of x";
cin>>x;
cout<<"value using local variable:="<<Using_local_variable(x)<<endl;
cout<<"value Using static variable:="<<Using_static_variable(x)<<endl;

}