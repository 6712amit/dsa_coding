#include<iostream>
using namespace std;
int powerOfNumber(int m,int n){
    if(n==0)
    return 1;
    if(n>0){
        return m*powerOfNumber(m,n-1);  //fact(n)=n*n-1*n-2.....1
    }                              // fact(n)=n*fact(n-1)
}
int EfficientWAyofPower(int m,int n){ // this is efficent approch to calculate power it takes approx half time then earlier method;
    if(n==0){
        return 1;                         
    }
    if(n%2==0)
    return EfficientWAyofPower(m*m,n/2);
    else
    return m*EfficientWAyofPower(m*m,n/2);
}
    
int main(){
int x,y;

cout<<"enter a number whose power is to be calculated "<<endl;
cin>>x;
cout<<"enter the power value"<<endl;
cin>>y;
cout<<x<<"to the power "<<y<<"="<<powerOfNumber(x,y);
cout<<endl;
cout<<"By efficient approach value="<<EfficientWAyofPower(x,y);
}