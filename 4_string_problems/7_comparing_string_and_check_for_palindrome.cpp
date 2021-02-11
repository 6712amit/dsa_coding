#include<iostream>
#include<algorithm> // transform present here;
using namespace std;
string reverse(string s){
int i=0;
int j=s.length()-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;j--;
    }
    return s;
}
int checkPallindrome(string s1, string s2){
    int i,j;
    transform(s1.begin(), s1.end(),s1.begin(),::toupper);// for ignoring the case of string
    transform(s2.begin(), s2.end(),s2.begin(),::toupper);
for( i=0,j=0; s1[i]!='\0' && s2[j]!='\0';j++,i++){
  if(s1[i]!=s2[j]){
      return 0;
  }
}
return 1;
}

int main(){
string s1="Madam";
string s=reverse(s1);

if(checkPallindrome(s1,s))
cout<<"Pallindrome"<<endl;
else
cout<<"not palindrome"<<endl;

return 0;
}
