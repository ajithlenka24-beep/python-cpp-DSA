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
/*#include<iostream>
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
}*/
/*
#include<iostream>
#include<cmath> // Used for mathematical functions like pow()
using namespace std;
int main(){
  int num = 1;
  int temp,num_power;
  for(num=1;num<=9;num++){
    num_power = 1;
    for(temp=1;temp<=5;temp++){
    //  cout<<num*temp<<" ";
            // cout << num * temp << " ";
            // Multiplies num by temp
            // Example: 3 × 1, 3 × 2, 3 × 3...

            // num_power = num * num_power;
            // Calculates the power manually by repeatedly multiplying num
            // Example for num = 3:
            // 3^1 = 3
            // 3^2 = 3 × 3 = 9
            // 3^3 = 3 × 3 × 3 = 27
    //num_power = num*num_power;
    //cout<<num_power<<" ";
    cout<<pow(num, temp)<<" ";   // pow(num, temp) calculates num raised to the power temp
                                 // Example: pow(3, 2) = 9
    }
    cout<<"\n";
  }
  return 0;
}*/
//MINI PROJECT EXPENSE SPLITTER.
/*#include<iostream>
using namespace std;
#include<cmath>
int main(){
  string names[5];
  int expenses[5],totalexp{0};
  float avgexp;
  for(int i = 1;i<=5;i++){
    cout<<"enter person "<<i<<" 's name : ";
    cin>>names[i-1];
    cout<<"how much "<<names[i-1]<<" spent : ";
    cin>>expenses[i-1];
    totalexp += expenses[i-1];
  }
  avgexp = totalexp / 5;
  cout<<"total expenses : "<<totalexp<<" per person : "<<avgexp<<" \n";
  for(int i=1;i<=5;i++){
    float topay = avgexp - expenses[i-1];
    cout<<names[i-1];
    if(topay<0){
      cout<<" to get "<< abs(topay);
    }else if(topay>0){
      cout <<" to pay do"<< topay;
    }else{
      cout<<"is all good \n";
    cout<<"\n";  
    }
  }
  return 0;
}*/
//funtions
/*#include<iostream>
using namespace std;
int doubling(int Num){
  Num = Num*2;
  return Num; 
}
float doubling(float Num){
  Num = Num*2;
  return Num; 
}
int main(){
  int x = 45;
  cout<<"before funtion : "<<x<<" \n";
  x = doubling(x);
  cout<<"after funtion : "<<x<<" \n";
  float y = 26.9;
  cout<<"before funtion : "<<y<<" \n";
  y = doubling(y);
  cout<<"after funtion : "<<y<<" \n";
  return 0;
}*/

// ARRAY PRACTICE
/*#include<iostream>
using namespace std;

int main(){

    string names[5];
    int marks[5];

    for(int i=0; i<5; i++){
        cout<<"enter student "<<i+1<<" name : ";
        cin>>names[i];

        cout<<"enter "<<names[i]<<" marks : ";
        cin>>marks[i];
    }

    cout<<"\n--- STUDENT DETAILS ---\n";

    for(int i=0; i<5; i++){
        cout<<names[i]<<" : "<<marks[i]<<"\n";
    }

    return 0;
}
// practice arrays in C++
*/
// 2D ARRAY PRACTICE
/*#include<iostream>
using namespace std;

int main(){

    int matrix[3][3];

    cout<<"Enter 9 numbers for the matrix:\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"\n--- MATRIX ---\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
// practice 2D arrays in C++
*/
// STRING CLASS PRACTICE
/*#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;

    cout<<"Enter your full name : ";
    getline(cin,name);

    cout<<"Your name is : "<<name<<"\n";

    cout<<"Length of your name : "<<name.length()<<"\n";

    cout<<"First character : "<<name[0]<<"\n";

    return 0;
}
// practice C++ string class
*/
// STRING METHODS PRACTICE
/*#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;

    cout<<"Enter your name : ";
    getline(cin,name);

    cout<<"Name : "<<name<<"\n";

    // length() gives the number of characters
    cout<<"Length : "<<name.length()<<"\n";

    // size() does the same thing as length()
    cout<<"Size : "<<name.size()<<"\n";

    // Accessing a character using index
    cout<<"First character : "<<name[0]<<"\n";

    // find() searches for a particular character/string
    if(name.find("a") != string::npos){
        cout<<"Your name contains 'a'\n";
    }
    else{
        cout<<"Your name does not contain 'a'\n";
    }

    return 0;
}
//practice C++ string methods
*/
// POINTER REVISION IN C++
/*#include<iostream>
using namespace std;

int main(){

    int num = 50;

    // Pointer stores the address of num
    int *ptr = &num;

    cout<<"Value of num : "<<num<<"\n";

    // Address of num
    cout<<"Address of num : "<<&num<<"\n";

    // Pointer contains the address
    cout<<"Value stored in pointer : "<<ptr<<"\n";

    // *ptr gives the value stored at that address
    cout<<"Value pointed by ptr : "<<*ptr<<"\n";

    // Changing num through pointer
    *ptr = 100;

    cout<<"After changing through pointer : "<<num<<"\n";

    return 0;
}
// revise pointers in C++
*/
// POINTER WITH ARRAY
/*#include<iostream>
using namespace std;

int main(){

    int numbers[5] = {10,20,30,40,50};

    int *ptr = numbers;

    for(int i=0; i<5; i++){
        cout<<"Value : "<<*(ptr+i)<<"\n";
    }

    return 0;
}

*/
// REFERENCES IN C++
/*#include<iostream>
using namespace std;

int main(){

    int num = 50;

    int &ref = num;

    cout<<"num : "<<num<<"\n";
    cout<<"ref : "<<ref<<"\n";

    ref = 100;

    cout<<"After changing ref : "<<num<<"\n";

    return 0;
}*/
//learn references in C++
/*namespace:provides a solution for preventing name conflicts in a larger projects.
each entity needs a unique name.
A namespace allows for identically named entities as long as the namespaces are different.*/ 
//#include<iostream>
//using namespace std;
//namespace first{
  //int x = 1;
//}
//namespace second{
//  int x = 2;
//}
//int main(){
    /*int x ;
   x = 0;
    cout<<x; 
    cout<<first::x;
    cout<<second::x;
    return 0;       ----o/p--> 012 */
   /* using namespace first;
    cout<<x;*/     //---o/p--> 1
  //using namespace second;
 // cout<<x;
 // return 0;  //------o/p---->2
//}
//typedef: reseverd keyword used to create an additional name(alias) for another datatype.
//new identitfier for an exisiting type help with readability and reduces typos.
//for this we need to include header file #include<vector> instead of typedef many ppl use using
#include<iostream>
#include<vector>
using namespace std;
//typedef vector<pair<string, int>> pairlist_t;
//typedef int number_t;
//typedef string text_t;
using text_t = string;
using number_t = int;
int main(){
  text_t name = "ajith";
  number_t age = 18;
  cout<<name<<"\n";
  cout<<age;
  return 0;
}