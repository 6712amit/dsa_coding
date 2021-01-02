#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x;
}/* r1, r2*/; // any variable r1,r2 can be declared here also it will be of structure rectangle type and also be accesible 
     // from any where in program; gloable variable

    /* structure rectangle r1,r2;*/ // this way also it globale variable of rectangle type can be made;
int main(){
struct  rectangle r;
r.length=10;
r.breadth=20;
cout<<sizeof(r)<<endl;  // here size is taking 4 byte for char also but it will be using only 1 byte 
 cout<<r.length<<endl;
 cout<<r.breadth<<endl;
/*
output
12
10
20
*/

    


}