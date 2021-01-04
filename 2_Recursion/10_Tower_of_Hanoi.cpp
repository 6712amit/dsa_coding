#include<iostream>
using namespace std;
int count=0;
void Tower_of_hanoi(int no_of_disk,int source_tower,int auxilary_tower,int destination_tower){
    if(no_of_disk>0){
        count++;
    Tower_of_hanoi(no_of_disk-1,source_tower,destination_tower,auxilary_tower);
    cout<<" "<<source_tower<<" to "<<destination_tower<<endl; 
    Tower_of_hanoi(no_of_disk-1,auxilary_tower,source_tower,destination_tower);
   
                 }                           // suppose  (n-1) disk is moved from source to auxilary tower recusively
                          }                    //remaining 1 disk is moved from source to destination
int main(){                                    //again (n-1) disk is moved from auxilary tower to destination tower.
Tower_of_hanoi(6,1,2,3);
cout<<endl;
cout<<"count="<<count<<endl;

}