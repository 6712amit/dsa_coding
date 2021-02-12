#include<iostream>
using namespace std;
int main(){
int  a[100]={2,5,7,18,33,40};
int b[100]={3,4,10,13,25};
int c[100];
int i=0;
int j=0;
int k=0;
while(i<=5&&j<=4)
{

    if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
    else{
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<=5)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=4&&j>4)
}
for(int l=0;i<=k;i++){
cout<<c[l]<<" ";}
return 0;
}
