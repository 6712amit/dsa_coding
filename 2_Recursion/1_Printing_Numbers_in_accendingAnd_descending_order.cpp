#include<iostream>
using namespace std;
/* 
input 5
print accending Order 
1 2 3 4 5
printing in descendig order
5 4 3 2 1
*/
void Accending_order(int n){
    if(n>0){
        Accending_order(n-1);
        cout<<n<<" ";
    }
}
void Descending_order(int n){
    if(n>0){                      // base condition od recursion every recursion must have this base condition in order to terminate
        cout<<n<<" ";
        Descending_order(n-1);
    }
}
int main(){
    int n;
cout<<"enter the number till where youw ish to print";
cin>>n;
cout<<"print accending Order "<<endl;
Accending_order(n);
cout<<endl;
cout<<"printing in descendig order"<<endl;
Descending_order(n);


}