// OOP CONCEPT 
//  CLASS : 

#include<iostream>
using namespace std;
class student{
       string name,courses[4];
       int id;
       bool fee_paid;
public:
      student(string s,int i):
      name{s},id{i}
      {}
      void print(){
        cout<<"STUDENT NAME : "<<name<<"\n (id: "<<id<<")\n";
        cout<<"fees : "<<fee_paid<<"\n";
        cout<<"courses : \n";
        for(string c : courses){
            cout<<c<<"\n";
        }
      }      
      void setcourse(int cnum, string c){
        courses[cnum] = c;
      }
      void payfee(){
        fee_paid = true;
      }
};
int main(){
  student s("doom", 999);
  s.setcourse(0, "QWER");
  s.setcourse(1,"DBMS");
  s.setcourse(2,"DLD");
  s.setcourse(3,"APSP");
  s.payfee();
  s.print();
    return 0;\

}