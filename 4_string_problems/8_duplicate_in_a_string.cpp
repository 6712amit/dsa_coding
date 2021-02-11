#include<iostream>
using namespace std;
// naive approch using two for loop
void find_duplicate(string s){  // time complexity =O(n^2);
    
for(int i=0; s[i]!='\0';i++){
    int count = 1;
    for(int j=i+1;s[j]!='\0';j++){
        if(s[i]==s[j]){
            count++;
        }
    }
    if(count>1)
    cout<<"character "<<s[i]<<" is preasent "<<count<<" times"<<endl;
}
}
// this is efficient because time complexity = o(n);
void find_duplicate_using_hashing(string s){
    int hash[27]={0};
    for(int i=0; i<s.length(); i++){
        hash[s[i]-97]++;
    }
    for(int i=0; i<27;i++){
        if(hash[i]>1){
            char c=i+97;
        cout<<"duplicate character "<<c<<" is present "<<hash[i]<<" times"<<endl;
        }
    }
}
int main(){
string s="finding";
find_duplicate_using_hashing(s);
// find_duplicate(s);
return 0;
}
