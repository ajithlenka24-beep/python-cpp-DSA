#include <iostream>
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
}