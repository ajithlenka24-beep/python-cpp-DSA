/*#include <iostream>
#include <string>
using namespace std;

// Class -> blueprint for creating objects
// Object -> actual instance of a class

class Student
{
public:
    string name;
    int age;

    void introduce()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

// Constructor -> automatically called when object is created
// Constructor name = same as class name
// Constructor has no return type

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Person object created!" << endl;
    }

    void showInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

// Parameterized constructor
// Values are passed while creating the object

class Car
{
public:
    string brand;
    string model;
    int year;

    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
};

// Constructor overloading
// Same constructor name with different parameters

class Phone
{
public:
    string brand;
    int price;

    Phone()
    {
        brand = "Unknown";
        price = 0;
    }

    Phone(string b, int p)
    {
        brand = b;
        price = p;
    }

    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Price : " << price << endl;
    }
};

// this -> pointer referring to the current object
// Useful when parameter name and data member name are same

class Laptop
{
private:
    string brand;
    int ram;

public:
    Laptop(string brand, int ram)
    {
        this->brand = brand;
        this->ram = ram;
    }

    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "RAM : " << ram << " GB" << endl;
    }
};

// Encapsulation -> wrapping data and methods together
// Private data cannot be directly accessed from main()
// Public methods are used to access/control the data

class BankAccount
{
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double amount)
    {
        accountHolder = name;
        balance = amount;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn!" << endl;
        }
        else
        {
            cout << "Invalid withdrawal!" << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    string getAccountHolder()
    {
        return accountHolder;
    }
};

// Getter -> gets/returns private data
// Setter -> changes private data

class Employee
{
private:
    string name;
    int salary;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(int salary)
    {
        if (salary >= 0)
        {
            this->salary = salary;
        }
    }

    string getName()
    {
        return name;
    }

    int getSalary()
    {
        return salary;
    }
};

// Static member belongs to the class
// All objects share the same static variable

class Counter
{
public:
    static int count;

    Counter()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Objects created : " << count << endl;
    }
};

int Counter::count = 0;

// Inheritance -> child class gets accessible
// properties and methods from parent class

class Animal
{
public:
    string name;

    void eat()
    {
        cout << name << " is eating." << endl;
    }

    void sleep()
    {
        cout << name << " is sleeping." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << name << " is barking." << endl;
    }
};

// Protected -> accessible inside the class
// and inside derived/child classes
// Not directly accessible from main()

class Vehicle
{
protected:
    string brand;

public:
    Vehicle(string b)
    {
        brand = b;
    }

    void showBrand()
    {
        cout << "Brand : " << brand << endl;
    }
};

class Bike : public Vehicle
{
private:
    int speed;

public:
    Bike(string b, int s) : Vehicle(b)
    {
        speed = s;
    }

    void showBike()
    {
        cout << "Bike Brand : " << brand << endl;
        cout << "Speed : " << speed << " km/h" << endl;
    }
};

// Multilevel inheritance
// Grandparent -> Parent -> Child

class GrandParent
{
public:
    void grandParentFunction()
    {
        cout << "Grandparent function" << endl;
    }
};

class Parent : public GrandParent
{
public:
    void parentFunction()
    {
        cout << "Parent function" << endl;
    }
};

class Child : public Parent
{
public:
    void childFunction()
    {
        cout << "Child function" << endl;
    }
};

// Multiple inheritance
// One child class inherits from multiple parent classes

class Camera
{
public:
    void takePhoto()
    {
        cout << "Taking photo..." << endl;
    }
};

class MusicPlayer
{
public:
    void playMusic()
    {
        cout << "Playing music..." << endl;
    }
};

class Smartphone : public Camera, public MusicPlayer
{
public:
    void makeCall()
    {
        cout << "Making a call..." << endl;
    }
};

int main()
{
    Student student1;

    student1.name = "AJ";
    student1.age = 18;

    student1.introduce();

    Person person1;

    person1.name = "Rahul";
    person1.age = 20;

    person1.showInfo();

    Car car1("BMW", "M4", 2026);

    car1.display();

    Phone phone1;
    Phone phone2("Samsung", 50000);

    phone1.display();
    phone2.display();

    Laptop laptop1("ASUS", 16);

    laptop1.display();

    BankAccount account1("AJ", 10000);

    cout << "Account Holder : " << account1.getAccountHolder() << endl;
    cout << "Initial Balance : " << account1.getBalance() << endl;

    account1.deposit(5000);

    cout << "After Deposit : " << account1.getBalance() << endl;

    account1.withdraw(2000);

    cout << "After Withdrawal : " << account1.getBalance() << endl;

    Employee employee1;

    employee1.setName("AJ");
    employee1.setSalary(50000);

    cout << "Employee : " << employee1.getName() << endl;
    cout << "Salary : " << employee1.getSalary() << endl;

    Counter c1;
    Counter c2;
    Counter c3;

    Counter::showCount();

    Dog dog1;

    dog1.name = "Bruno";

    dog1.eat();
    dog1.sleep();
    dog1.bark();

    Bike bike1("Yamaha", 120);

    bike1.showBrand();
    bike1.showBike();

    Child child1;

    child1.grandParentFunction();
    child1.parentFunction();
    child1.childFunction();

    Smartphone smartphone1;

    smartphone1.takePhoto();
    smartphone1.playMusic();
    smartphone1.makeCall();

    return 0;
}*/
// NUMBER GUESSING GAME.
/*#include<iostream>
using namespace std;
int main(){
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num = rand()%100+1;
    do{
        cout<<"enter a number between (1-100):";
        cin>>guess;
        tries++;
        if (guess>num){
            cout<<"too high"<<endl;
        }
        else if (guess<num){
            cout<<"too low"<<endl;
        }
        else{
            cout<<"you guessed it in "<<tries<<" tries!"<<endl;
        }
    }while(guess!=num);
    return 0;
}*/
//FUNCTION.
/*#include<iostream>
using namespace std;
void happyBirthday(string name){
    cout<<"Happy Birthday "<<name<<"!\n";
}
int main(){
    string name;
    cout<<"enter your name : ";
    getline(cin, name);
    happyBirthday(name);
  return 0;
}
*/
//RETURN TYPE OF FUNCTION.
/*#include<iostream>
using namespace std;
double square(double num){
    double area = num*num;
    return area;
}
double cube(double num1){
    double volume = num1*num1*num1;
    return volume;
}
int main(){
    double num;
    double num1;
    cout<<"enter the number : ";
    cin>>num;
    cout<<"enter the number fro volume: ";
    cin>>num1;
    double volume = cube(num1);
    double area = square(num);
    cout<<"the area of square is : "<<area<<"\n";
    cout<<"the volume of the cube is : "<<volume<<"\n";
    return 0;
}*/
/*#include<iostream>
using namespace std;
void bakepizza();
void bakepizza(string topping1);
void bakepizza(string topping1,string topping2);
int main(){
    bakepizza();
    bakepizza("cheese");
    bakepizza("cheese","mushroom");
    return 0;
}
void bakepizza(){
    cout<<"here is your pizza\n";

}
void bakepizza(string topping1){
    cout<<"here is your pizza with "<<topping1<<"\n";
}
void bakepizza(string topping1,string topping2){
    cout<<"here is your pizza with "<<topping1<<" and "<<topping2<<"\n";
}*/
/*#include<iostream>
using namespace std;
int main(){
//array = a data structure that can hold multiple values,values thhat can be accessed by index.kind of same data type.
    string car[] = {"BMW","TOYOTA","RANGE ROVER"};
    car[2] = "RR";//--> UPDATING THE ARRAY.
    cout<<car[1]<<'\n';
    cout<<car[0]<<'\n';
    cout<<car[2]<<'\n';
   return 0;
}*/
/*
#include<iostream>
using namespace std;
double getTotal(double prizes[], int size){
    double total = 0;
    for(int i = 0;i<size;i++){
        total += prizes[i]; 
    }
    return total;
}
int main(){
     double prizes[] = {49.99,52.9,54.7,99.99};
      int size = sizeof(prizes)/sizeof(prizes[0]);
      double total = getTotal(prizes, size);
      cout <<"$"<<total;
    return 0;  
}  */ 
/*#include<iostream>
using namespace std;
int searcharray(int array[], int size, int element){
    for(int i = 0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
      int numbers[] = {1,2,3,4,5,6,7,8,9,10};
      int size = sizeof(numbers)/sizeof(numbers[0]);
      int index;
      int mynum;
      cout<<"Enter the number you want to search: "<<'\n';
      cin>>mynum;
      index = searcharray(numbers, size,mynum);
      if(index != -1){
        cout<<mynum<<" is at : "<<index;
      }else{
        cout<<mynum<<" is not avalible in the Array";
      }
    return 0;  
}*/ 
/*#include<iostream>
using namespace std;
void sort(int array[], int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j = 0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(){
    int array[] = {2,1,3,46,54,100,99,5,1000,109,999};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    for(int element : array){
        cout<<element<<" ";
    }
    return 0;
}*/
//FILL.
/*#include<iostream>
using namespace std;
int main(){
    const int SIZE = 100;
    string foods[SIZE];
    fill(foods,foods+(SIZE/2),"pizza");
    fill(foods+(SIZE/2),foods+SIZE,"egg puff");
        for(string food : foods){
             cout<<food<<'\n';
        }
        return 0;
    }
*/
/*#include<iostream>
using namespace std;
int main(){
    string foods[5];    
    int size = sizeof(foods)/sizeof(foods[0]);
    for(int i = 0;i<size;i++){
        cout<<"enter your fav food #"<<i+1<<":"<<'\n';
        getline(cin, foods[i]);
    }
    cout<<"you like the following foods : ";
    for (string food : foods){
        cout<<food<<'\n';
    }
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n = 3;

    string foods[][n] = {{"potato egg","chicken fry","chicken biriyani"},
                         {"potato fry","chicken roll","chicken pakoda"},
                         {"french fries","kfc chicken","chicken winglets"}};
    //cout<<foods[0][2]<<" ";
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<foods[i][j]<<" ";
        }
    }
    return 0;                        
}*/
#include<iostream>
using namespace std;
int main(){
    string name = "Aj";
    int age = 18;
    bool hungry = true;
    cout<<&name<<'\n';
    cout<<&age<<'\n';
    cout<<&hungry<<'\n';
    return 0;
}