#include<iostream>
using namespace std;

int sum(int n ){ 
    int t=0;            //sum(n)=1+2+3+4+5+......sum(n-1)+n
    if(n>0){                 //sum(n)=sum(n-1)+n;
        t=sum(n-1)+n;
    }                         // n(n+1)/2 formula;
return t;
}
int main(){
int x;
cout<<"enter the value upto which you wish to know sum"<<endl;
cin>>x;
cout<<"sum of "<<x<<" natural number is="<<sum(x);
}