#include<iostream>
#include<iomainp>
using name space std;
int main(){
  float marks[] = {78.4,90.6,45.9,72.2,54.4};
  char names[][20]={"ajith","wimal","kanthi","suranji","kushmitha"};
  cout<<setw(5)<<"no"<<setw(5)<<"no"<<setw(15)<<"name"<<setw(10)<<"marks"<<endl;
  for(int r = 0; r<5;r++){
    cout<<setw(5),,r+1;
    cout<<setw(15)<<names[r];
    cout<<setw(10)<<setiosflags(ios::fixed)<<set percision(2)<<marks[r]<<endl;
  }
}