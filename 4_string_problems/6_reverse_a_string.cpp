#include<iostream>
#include<string>
using namespace std;
int main(){
string s="I LOVE PHYTHON";
int j;
int i=0;
for( j=0; s[j]!='\0';j++){}
int k=j-1;
while(i<k){
char t=s[i];
s[i]=s[k];
s[k]=t;
i++;
k--;
}
s[j]='\0';
cout<<s;
return 0;
}
