#include<iostream>
using namespace std;

void permute_using_swap(char s[],int l,int h){
    int i;
    if(l==h){
        cout<<s<<endl;
    }
    for( i=l;i<h;i++){
        swap(s[l],s[i]);
        permute_using_swap(s,l+1,h);
        swap(s[l],s[i]);
    }
}

void permute(char s[],int k){
    static char res[10];
    static int ans[10]={0};
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for( i=0;s[i]!='\0';i++){
            if(ans[i]==0){
                res[k]=s[i];
                ans[i]=1;
                permute(s,k+1);
                ans[i]=0;
            }
        }
    }
}

int main(){
char s[]="abc";
permute_using_swap(s,0,3);
return 0;
}
