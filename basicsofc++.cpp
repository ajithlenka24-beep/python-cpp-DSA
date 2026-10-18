/*#include <iostream>
using namespace std;

int main() {
    int x = 15;
    int y = 50;

    int result = x * y;

    cout << "C++ is running successfully!" << endl;
    cout<<"15 x 50 :"<<result<<endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;// allows us to use names from the std namespace without writing std:: every time.
//std:: tells C++ that a particular name, such as cout or endl, belongs to the standard (std) namespace.
int main(){
    float degress,fTemp;
    cout<<"enter the temperature in celsius : ";
    cin>> degress;
    fTemp = degress * 9/5 + 32;
    cout <<"current temperature in celsius "<<degress<<"c."<<std::endl;
    cout <<"temperature in faherinheat is "<<fTemp<<"f.\n"; //std::endl is like \n;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    string name;
    int temper;
     cout<<"enter you name : ";
     cin>>name;
     cout<<"enter the temperature : ";
     cin>>temper;
cout<<"your name is "<<name<<" and the temperature you mentioned is "<<temper<<"\n";     


if(temper > 30){
    cout<<"temperature is high";
}
else{
    cout<<"temperature is low";
}
}*/
//now lets do a mini project(student academic status(P/F)) based completed concepts.
/*#include<iostream>
using namespace std;
int main(){
    int marks,att;
    string name ;
    int pass = 35;
    cout<<"enter your name : \n";
    cin>>name;
    cout<<"enter you marks : \n";
    cin>>marks;
    cout<<"enter your attendence : \n";
    cin>>att;
  if(marks < pass|| att < 40){
    cout<<"we're sorry "<<name<<" your fail,better luck next time\n";
  }else if(marks>pass && att > 40){
    cout<<"congratulations "<<name<<" you have passed with "<<marks<<" and keep it up";
  }else if(marks>pass && att < 40){
    cout<<"congrats you have passed with "<<marks<<" but you have to look after your attendence "<<name<<"\n";
  }else{
    cout<<"please enter correct details";
  }
  return 0;
}*/
// the above mini project is just understanding..
//loops
#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int Num = 99;
  //  for (num = 1;num<=10;num++){
  //      cout<<"NUM1 : "<<num<<", NUM^2 : "<<(num*num)<<", NUM^3 : "<<(num*num*num)<<"\n";
  //  }
    Num = 99;
    while(Num<=109){
        cout<<"Num : "<<Num<<"\n";
        Num++;
    }
    
    return 0;
}

