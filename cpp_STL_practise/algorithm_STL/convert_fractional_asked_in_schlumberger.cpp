#include<iostream>
#include<sstream>
#include<string>
/*
input: 2.95,
output: 2 19/20

input 2.08;
output 2 2/25;
*/
using namespace std;
int main(){
  cout<<"enter the number";
//float input=2.95;
float input;
cin>>input;
int a=input;
stringstream ss,s1;
string s="";
ss<<input;
ss>>s;
s=s.substr(s.find(".")+1,s.length());
int count=s.length();
int i=0;
s1<<s;
s1>>i;
int size=1;int num,den;
while(count>0)
{size=size*10;count--;}
for(int j=1;j<i;j++){
    if(i%j==0&& size%j==0){
      num=i/j;
      den=size/j;
      i=num;
      size=den;j=1;
    }
}
// cout<<a<<endl;
// cout<<s<<endl;
// cout<<i<<endl;
cout<<a<<" "<<num<<"/"<<den<<endl;

return 0;
}
