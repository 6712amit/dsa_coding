#include<iostream>
using namespace std;
/*

formula NCR= n!/(r!*(n-r)!) :
combination;formula ncr is used to find out no of ways we can select the subset of those object .
pascal traingle: shows that the values of ncr can be obtained by performing addition recursively 

it is a recursive function any no is a addition to its previous terms 
eg: 4c2=3c1+3c2;
ncr= n-1Cr-1 +n-1Cr; 
*/
int fact(int n){
    if(n==0)
    return 1;
return fact(n-1)*n;
}

int combination_using_formula(int n,int r){
int numerator=fact(n);
int denominator=fact(n-r)*fact(r);
return numerator/denominator;
}

int combination_by_pascal(int n,int r){
if(r==0|| n==r)
return 1;
else
   return combination_by_pascal(n-1,r-1)+combination_by_pascal(n-1,r);

}

int main(){
cout<<"combination ="<<combination_by_pascal(5,3)<<endl;
cout<<"combination using formula="<<combination_using_formula(5,3);
}