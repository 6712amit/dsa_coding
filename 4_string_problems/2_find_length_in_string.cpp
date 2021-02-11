#include<iostream>
using namespace std;
int main(){
string s="hello world";
int count=0;
for(int i=0; s[i] != '\0';i++){
    count++;
}
cout<<"length "<<count;
return 0;
}
