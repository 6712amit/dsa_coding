
#include <iostream>
#include<string>
#include<list>
using namespace std;

class Book{
    public:
    string name;
    int price;
    Book(string name,int price){
        this->name=name;
        this->price=price;
    }
};
template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}
class Bookcompare{
    public:
   bool operator()(Book A,Book B){
       if(A.name==B.name){
           return true;
       }
       else
       return false;
   } 
};
template<class ForwardIterator,class T, class compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key, compare cmp){
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}
int main()
{
    Book b1("c++",100);//old version
  Book b2("python",120);
  Book b3("java",130);
  list<Book>l;
  l.push_back(b1);
  l.push_back(b2);
  l.push_back(b3);
  Bookcompare cmp;
  Book booktofind("c++",110);
  auto it=search(l.begin(),l.end(),booktofind,cmp);
  if(it!=l.end()){
      cout<<"book found ";
  }    
  else{
      cout<<"book not found";
  }

    return 0;
}
