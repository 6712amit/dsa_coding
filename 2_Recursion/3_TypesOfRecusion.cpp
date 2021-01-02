/*
there are 5 types of recursion
1. Tail recursion
2.Head recursion
3.tree recursion
4.indirect recursion
5.nested recursion
*/

#include<iostream>
using namespace std;
//head recusion example
void HeadRecursion(int n){
    if(n>0){
        HeadRecursion(n-1);  // if there is no statement before function call then it is called head recursion
    cout<<n<<" ";
    }
}
void TailRecursion(int n){
    if(n>0){
    cout<<n<<" ";
    TailRecursion(n-1); }// when the function call is the last statement of function then it is called tail recursion
}

void linearRecursion(int n){
    if(n>0){
    cout<<n<<" ";      //any head or tail recursion is also linear when there only one recusive call then it is linear recusion
    linearRecursion(n-1);
}}
void TreeRecusion(int n){
    if(n>0){
        cout<<n<<" ";
        TreeRecusion(n-1); // when there is more than one recursive call in the function then it is called tree recursion;
        TreeRecusion(n-1);// since it form tree like structure when tracing it
                           // time complexity of this function =((2^3+1) -1) when n=3 
                           // general formula of time complexity =(2^n+1 -1) when n=n; space complexity=n;
    }
}
void funb(int n);
void indirectRecursion(int n){
    if(n>0){
        cout<<n<<" "<<endl;
        funb(n-1);
    }
}
void funb(int n){        // this function is taken for indirect Recusion demonstration
    if(n>1){
      cout<<n<<" "<<endl;
      indirectRecursion(n/2);  
    }
}
//end of indirectRecursion
int NestedRecursion(int n)  //when recursive function pass parameter as recursive function then it is caled recursive fnction;
{
    if(n>100)
    return (n-10);
    else
     return NestedRecursion(NestedRecursion(n+11));  
}
int main(){
cout<<"example of head recursion values are"<<endl;
HeadRecursion(3);
cout<<endl;
cout<<"example of tail recursion values are"<<endl;
TailRecursion(3);
cout<<endl;
cout<<"example of linear recursion values are"<<endl;
linearRecursion(3);
cout<<endl;
cout<<"example of Tree recursion values are"<<endl;
TreeRecusion(3);
cout<<endl;
cout<<"example of nested recursion values are"<<endl;
cout<<NestedRecursion(95)<<endl;
cout<<endl;
cout<<"example of Indirect recursion values are"<<endl;
indirectRecursion(20);
}

