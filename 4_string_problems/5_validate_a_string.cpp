#include<iostream>
using namespace std;
int main(){
    // valid string is which consist of alphabets and numbers,
string s="ani?321";
int flag=0;
for(int i=0; s[i] != '\0'; i++){
if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57)){
   flag =1;
}
}
if(flag==0)
cout<<"valid string";
else
cout<<"invalid string";
return 0;
}
