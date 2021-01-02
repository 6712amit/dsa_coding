#include<iostream>
using namespace std;
/*Taylor series e^x= 1+x/1 +x^2/2! + x^3/3! .......+ n times */
double e(int x,int n){
   static double  fact=1, pow=1;
    double  r;

    if(n==0)
    return 1;
    else{
    r=e(x,n-1);
    fact=fact*n;
    pow=pow*x;
    return r+pow/fact;
    }
}
// Taylor series by an efficeint approch
double exp(int x,int n){           // 1+x/1 + x^2/2! + x^3/3! + .......
  static double sum;                                  // 1+x/1[1+ x/2 + x^2/2*3 + x^3/2*3*4]
if(n==0)                                            // 1+x/1[1+ x/2[1+x/3+x^2+3*4]]  ----O(n) 
    return sum;
sum= 1 +x*sum/n;                                 
   return exp(x,n-1);
}


//taylor series using iterative loop
double ex(int x,int n){
    double sum=0;
    for(n;n>0;n--){
        sum=1+x*sum/n;
    }
    return sum;
}

int main(){
cout<<e(1,10);
cout<<endl;
cout<<"efficient approach="<<exp(1,10)<<endl;
cout<<"iterative approch for horners rule "<<ex(1,10);
}