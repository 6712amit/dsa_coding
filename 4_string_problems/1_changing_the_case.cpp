#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"enter the string"<<endl;
string s;
getline(cin,s);
for(int i=0; s[i]!='\0';i++){
    if(s[i]!=' ')
    s[i]=s[i]-32;
}
cout<<s<<endl;
int i;
for( i=0; s[i]!='\0';i++){
}
cout<<"length = "<<i<<endl;
return 0;
}
