#include<iostream>
using namespace std;
int main(){
string s="this is a boy";
int vowel,consonent;
vowel=consonent=0;
for (int i = 0; s[i]!='\0'; i++)    
{
   if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'|| s[i]=='u'){
       vowel++;
   }
   else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<122)){
       consonent++;
   }
}
cout<<"vowel count "<<vowel<<endl;
cout<<"consonent count "<<consonent<<endl;

return 0;
}
