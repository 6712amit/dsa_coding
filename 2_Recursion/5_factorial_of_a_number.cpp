#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    if(n>0){
        return n*factorial(n-1);  //fact(n)=n*n-1*n-2.....1
    }                              // fact(n)=n*fact(n-1)
}
int main(){
int x;

cout<<"enter a number"<<endl;
cin>>x;
cout<<"factorail of "<<x<<"="<<factorial(x);
}