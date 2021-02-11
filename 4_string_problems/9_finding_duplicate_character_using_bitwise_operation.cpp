#include<iostream>
using namespace std;
void find_duplicate_using_bitwise_operation(string s){
    int h=0;
    int x=0;
    for(int i=0; s[i]!='\0';i++){
        x=1;
        x=x<<s[i]-97;
        if((x&h)>0){
            cout<<"duplicate character is "<<s[i]<<endl;
        }
        else
        h=h|x;
    }
}
int main(){
string s="finding";
find_duplicate_using_bitwise_operation(s);
return 0;
}
