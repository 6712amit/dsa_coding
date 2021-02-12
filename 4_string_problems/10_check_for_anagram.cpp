/*
 * check if the given two strings are anagram or numerator
 * 
 * anagram are two set of strings which are formed using same set of characters 
 * 
 * example decimal and medical are anagram
**/
#include<iostream>
#include<algorithm>
using namespace std;
//method 1: time complexity =O(nlogn)
// sort the array and then compare the character of one string with another;
// method 1:
int check_anagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0; s1[i];i++){
        if(s1[i]!=s2[i]){
            return 0;
        }
    }
    return 1;
}
/*Method 2 (Count characters) 
* This method assumes that the set of possible characters in both strings is small. In the following implementation,
 it is assumed that the characters are stored using 8 bit and there can be 256 possible characters. 

* Create count arrays of size 256 for both strings. Initialize all values in count arrays as 0.

*Iterate through every character of both strings and increment the count of character in the corresponding count arrays.

*Compare count arrays. If both count arrays are same, then return true.
*/
//method 2:
int check_anagram_using_count(string s1, string s2){
    int count1[256]={0};                                  //time complexity=O(n)
    int count2[256]={0};                                  // space complexity=O(n)
    if(s1.length()!=s2.length())
    return 0;
    for(int i=0; s1[i]!='\0';i++){
        count1[s1[i]]++;
        count2[s2[i]]++;

    }
    for(int i=0; i<256; i++){
        if(count1[i]!=count2[i])
        return 0;
    }
    return 1;
}
// now we can use single single array for count .
// count for one string and decrement for other string
// method 3:
int check_anagram_using_one_count(string s1, string s2){
    int count1[256]={0};                                  //time complexity=O(n)           // space complexity=O(n)
    if(s1.length()!=s2.length())
    return 0;
    for(int i=0; s1[i]!='\0';i++){
        count1[s1[i]]++;
        count1[s2[i]]--;

    }
    for(int i=0; i<256; i++){
        if(count1[i]>0)
        return 0;
    }
    return 1;
}
// we can use summation of ascci values of the two string if both same then anagram otherwise not a anagram
//method 4:
int check_anagram_using_ascci_summation(string s1, string s2){
    int sum=0;
    int sum1=0;
    for(int i=0; s1[i]; i++){
        sum=sum+s1[i];
    }
     for(int i=0; s2[i]; i++){
        sum1=sum1+s2[i];
    }
    return sum==sum1;
}
int main(){
    if(check_anagram_using_ascci_summation("peekcocak","keepcaock"))
    cout<<"anagram";
    else
    cout<<"not anagram";
return 0;
}
