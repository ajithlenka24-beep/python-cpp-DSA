#CLASS : They allow us to create our own data types. A class is a blueprint for creating objects. An object is an instance of a class. Classes encapsulate data for the object and methods to manipulate that data.
#object : a "bundle" of related attributes and methods(functions).we need a class to create an object.
"""class employee:
    pass
emp_1 = employee()
emp_2 = employee()
print(emp_1)
print(emp_2)
emp_1.first = 'arjun'
emp_1.last = 'kumar'
emp_1.email = 'arjun.kumar@example.com'
emp_1.pay = 500000

emp_2.first = 'test'
emp_2.last = 'user'
emp_2.email = 'test.user@example.com'
emp_2.pay = 600000

print(emp_1.email)
print(emp_2.email)"""
"""class employee:
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@example.com'
    def fullname(self):
        return '{} {}'.format(self.first, self.last)    
emp1 = employee('arjun', 'kumar', '500000')
emp2 = employee('test', 'user', '600000')
print(emp1.email)
print(emp2.email)
print(emp1.fullname())
print(emp2.fullname())

class car:
    def __init__(self, brand, model, year, price):
        self.brand = brand
        self.model = model
        self.year = year
        self.price = price
    def display(self):
        return '{},{},{}->{}'.format(self.brand, self.model, self.year, self.price)
    def value(self):
        self.price = int(self.price * 1.04 )
        return self.price
c1 = car('TOYATA', 'INNOVA',2021, 2000000)
c2 = car('BMW', 'X5', 2022, 8000000)
print(c1.display())
print(c2.display())
print(c1.value())
print(c2.value())
#class variable : A class variable is a variable that is shared among all instances of a class.
#Class variables are defined within the class construction.
#They are not tied to any particular object, but rather belong to the class itself.
#we can change for a particular object but it is only for that object rest will be remained same.
#we use class variable when the varuable is same for all the objects of the class.
class student:
    school = 'ABC School' #class variable
    def __init__(self, name, age):
        self.name = name
        self.age = age
s1 = student('arjun', 20)
s2 = student('test', 21)        
print(student.school)
print(student.__dict__) #class variable is stored in class namespace 
print(s1.school)
print(s2.school)
print(s1.__dict__) #instance variable is stored in instance namespace.but you can't see class variable in instance namespace
s1.school = 'xyz school' #changing class variable for a particular object
print(s1.school)
#inheritance: allows a class to inherit the attributes and methods of another class. 
#The class that is inherited from is called the parent class or base class, and the class that inherits is called the child class or derived class.
#helps with code reusability and extensibility "class child(parent):"
class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species
    def eat(self):
        return '{} is eating.'.format(self.name)
    def sleep(self):
        return '{} is sleeping.'.format(self.name)
class Dog(Animal):
    pass
class Cat(Animal):
    pass
class Mouse(Animal):
    pass
dog = Dog('dog', 'canine')
cat = Cat('meow', 'feline')
mouse = Mouse('mouse', 'rodent')
print(dog.eat())
print(cat.name)
print(mouse.sleep())
#multiple inheritance: A class can inherit from multiple classes.
#c(a,b): c is child and a,b are parent classes
#multi level inheritance: inhert from a parent which inherits from another parent class.
#c(b)<-b(a)<-a
class animal:
    def __init__(self, name):
        self.name = name

class prey(animal):
    def run(self):
        return f'{self.name} is running.'

class predator(animal,Dog):                  #see line 124 for clarification.
    def hunt(self):
        return f'{self.name} is hunting.'

class rabbit(prey, predator):
    pass

class fox(prey, predator):
    pass

rabbit1 = rabbit('Rabbit')
fox1 = fox('Fox')

print(rabbit1.run())
print(rabbit1.hunt())
print(fox1.run())
print(fox1.hunt())
print(rabbit1.eat())  #multi level inheritance used here.
#ABSTRACT CLASS : a class that cannot be instantiated on its own; meant to be subclass.
#They can contain abstract methods, which are methods that are declared but contain no implementation.
#Abstract classes are used to define a common interface for a group of related classes.
#uses: 1. prevents instantiation of the class itself. 2.requires children to use inherited abstract methods.
from abc import ABC, abstractmethod
class vehicle(ABC):
    @abstractmethod
    def go(self):
        pass
    @abstractmethod
    def stop(self):
        pass
class CAR(vehicle):
    def go(self):
        print("drive the car")
    def stop(self):
        print("stop driving the car")
car = CAR()
car.go()
car.stop()      
#The one-line memory trick
#Abstract class = Define WHAT subclasses must do, while subclasses define HOW they do it.       

#super(): a funtion used in a child class to call a method from its parent class(super()).allows you to extend the funtionality of the inherited methods.
class shape:
  def __init__(self,colour,filled):
    self.colour = colour
    self.filled = filled
  def describe(self):
    print(f"it is {self.colour} and {'filled' if self.filled else 'not filled'}")
class circle(shape):
  def __init__(self,colour,filled,radius):
    super().__init__(colour,filled)
    self.radius = radius 
  def describe(self):
    print(f"it is a circle with area of {3.14 * self.radius * self.radius}")
class square(shape):
  def __init__(self,colour,filled,side):
    super().__init__(colour,filled)
    self.side = side
c1 = circle("red",True,5)
s1 = square("blue",False,10)
print(f"{c1.radius}cm")
print(c1.colour)
print(f"{s1.side}cm")
print(s1.colour)
c1.describe()
s1.describe()
print(c1.describe())

# super() allows the child class to access the parent class without directly naming the parent.
# Here, super().__init__() calls the parent constructor so the child can reuse its initialization.
# Method overriding happens when a child class defines a method with the same name as the parent but with its own implementation.
# When the overridden method is called, Python uses the child's version instead of the parent's version.
# If the child does not override a method, it automatically inherits and uses the parent's version.


#POLYMORPHISM:GREEK WORD "POLY" MEANS MANY AND "MORPH" MEANS FORMS(MANY FORMS).
#two ways to achieve polymorphism in python: 1. inhertance: An object could be treated of the same type as a parent class. 
#                                            2. duck typing : object must have necessary methods/attributes.
#the ability of different classes to be treated as instances of the same class through a common interface.
#In Python, polymorphism is often achieved through method overriding and duck typing.
"""
"""from abc import ABC, abstractmethod
from turtle import circle

from pyautogui import size
class shape(ABC):
    @abstractmethod
    def area(self):
        pass
class circle(shape):
    def __init__(self,radius):   
        self.radius = radius
    def area(self):
        return 3.14 * self.radius * self.radius 
class rectangle(shape):
    def __init__(self,length,width):
        self.length = length
        self.width = width
    def area(self):
        return self.length * self.width
shapes = [circle(5), rectangle(4, 6)]
for shape in shapes:
    print(f"Area: {shape.area()}cm^2")"""  
#duck typing: another way to achieve polymorphism besides inhertances
#"if it looks like a duck and quacks like a duck, it must be a duck."
"""class animal:
    alive = True
class dog(animal):
    def sound(self):
        print("bark")
class cat(animal):
    def sound(self):
        print("meow")
class car:
    def sound(self):
        print("vroom")   
    alive = False         
animals = [dog(), cat(), car()]   #"if it looks like a duck and quacks like a duck, it must be a duck."
for animal in animals:
    animal.sound()  #polymorphism achieved through duck typing
    print(animal.alive)  #polymorphism achieved through duck typing    
#aggregation : represents a relationship where one object (the whole) contains references to one or more INDEPENDENT objects (the parts).
class library:
    def __init__(self, name):
        self.name = name
        self.books = []  # Aggregation: Library has a list of Book objects
    def add_book(self, book):
        self.books.append(book)
    def display_books(self):
        for book in self.books:
            print(f"Title: {book.title}, Author: {book.author}")
class book:
    def __init__(self, title, author):
        self.title = title
        self.author = author
book1 = book("The Great Gatsby", "F. Scott Fitzgerald")
book2 = book("To Kill a Mockingbird", "Harper Lee")
book3 = book("1984", "George Orwell")
library = library("City Library")
library.add_book(book1)
library.add_book(book2)
library.add_book(book3)
library.display_books()"""                       
#composition : represents a relationship where one object (the whole) contains references to one or more DEPENDENT objects (the parts). The lifetime of the dependent objects is tied to the lifetime of the whole object.
"""class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower


class Wheel:
    def __init__(self, size):
        self.size = size


class Car:
    def __init__(self, brand, model, engine, wheels):
        self.brand = brand
        self.model = model
        self.engine = engine      # Composition
        self.wheels = wheels      # List of Wheel objects

    def display_info(self):
        print(f"Brand: {self.brand}")
        print(f"Model: {self.model}")
        print(f"Engine Horsepower: {self.engine.horsepower}")

        for i, wheel in enumerate(self.wheels, start=1):
            print(f"Wheel {i} Size: {wheel.size}")


car1 = Car(
    "Toyota",
    "Camry",
    Engine(200),
    [Wheel(16), Wheel(16), Wheel(16), Wheel(16)]
)

car1.display_info()

print()

car2 = Car(
    "Honda",
    "Civic",
    Engine(180),
    [Wheel(15), Wheel(15), Wheel(15), Wheel(15)]
)

car2.display_info()

#NESTED CLASS : a class defined within another class.
#                     class outer:
#                         class inner:
#benefits : allows you to logically group classes that are closely related,encapsulates private details, 
#that aren't relavent outside of the outer class,keeps the namespace; reduce the possibility of naming conficts.
"""
"""class company:
  class employee:
    def __init__(self,name,position):
      self.name = name
      self.position = position 
    def details(self):
      return f"name is {self.name} and position is {self.position}"
  def __init__(self,company_name):
      self.company_name = company_name
      self.employees = []
  def add(self,name,position):
      new_employee = self.employee(name,position)
      self.employees.append(new_employee)
      return new_employee
  def list(self):
      return [employee.details() for employee in self.employees]
c1 = company("qwerty")

e1 = c1.add("aj","ceo")
e2 = c1.add("qwert","founder")

print(e1.details())
print(e2.details())
print(c1.list())"""
#company
#│
#├── company_name
#│
#├── employees
#│      │
#│      ├── employee
#│      │    ├── name = aj
#│      │    └── position = ceo
#│      │
#│      └── employee
#│           ├── name = qwert
#│           └── position = founder
#│
#├── add()
#└── list()

#static method : a metho that belongs to a class rather than any object of the class(instance).
#usually used for general utility functions
# instance method : best for operations on instance of the class(object).
# static method :  best for utility functions that do not need to access to class data.
#              METHOD
#                 │
#      ┌─────────┼─────────┐
#     ↓         ↓         ↓
#    Instance    Class     Static
#       │         │         │
#      self      cls       nothing
#       │         │         │
#    Object      Class     Utility
#question : then what is the  use of using static method we can you normal things like for,if etc...
#answer : The special thing about a static method is not what it can do.
#It's where you put it and what it represents.
#Static method = a normal function that is logically grouped inside a class because it belongs conceptually to that class, while not needing object/class data.
"""class employee:
    def __init__(self,name,position):
        self.name = name
        self.position = position
    def details(self):
        return f"name is {self.name} and position is {self.position}"

    @staticmethod
    def is_valid_position(position):
        valid_positions = ["ceo", "manager", "developer", "designer"]
        return position in valid_positions
print(employee.is_valid_position("ceo"))  # True
print(employee.is_valid_position("intern"))  # False

employee1 = employee("Alice", "developer")
print(employee1.details())  # name is Alice and position is developer
employee2 = employee("Bob", "intern")
print(employee2.details())  # name is Bob and position is intern
"""
#class method : allow operations related to the class itself.
#take(cls) as the first parameter ,which represents the class itself.
"""class student:
  count = 0
  total_gpa = 0
  def __init__(self,name,gpa):
    self.name = name
    self.gpa = gpa
    student.count += 1 
    student.total_gpa += gpa
   #instance method
  def get_info(self):
    return f"{self.name} {self.gpa}"
  @classmethod
  def get_count(cls):
    return f"total no.of students : {cls.count}"
  @classmethod
  def gpa_average(cls):
    return f"average gpa of students : {(cls.total_gpa)/(cls.count)}"
    
s1 = student("loki",2.4)   
s2 = student("lok",3)  
s3 = student("loi",5)  
s4 = student("lki",2)  
s5 = student("oki",4)  
print(student.get_count())   
print(student.gpa_average())"""
#magic methods : dunder methods(double underscore methods) __init__, __str__, __eq__,
#they are automatically called by many of python's built-in operations and functions.
#they allow developers to define or customize the behavior of objects
# Magic Methods / Dunder Methods
# Dunder = Double Underscore
# Example: __init__, __str__, __len__, __eq__, __add__, etc.


class Student:

    # __init__ is called automatically when an object is created
    def __init__(self, name, age, marks):
        self.name = name
        self.age = age
        self.marks = marks

    # __str__ is called when we use print(object)
    def __str__(self):
        return f"Student: {self.name}, Age: {self.age}, Marks: {self.marks}"

    # __len__ is called when we use len(object)
    def __len__(self):
        return len(self.marks)

    # __eq__ is called when we compare two objects using ==
    def __eq__(self, other):
        return self.marks == other.marks

    # __lt__ is called when we use <
    def __lt__(self, other):
        return self.marks < other.marks

    # __add__ is called when we use + between two objects
    def __add__(self, other):
        return self.marks + other.marks

    # __contains__ is called when we use "in"
    def __contains__(self, item):
        return item in self.name


# Creating objects
s1 = Student("Aj", 20, [85, 90, 95])
s2 = Student("Rahul", 20, [80, 88, 92])


# __str__
# Python automatically calls s1.__str__()
print(s1)

# __len__
# Python automatically calls s1.__len__()
print(len(s1))

# __eq__
# Python automatically calls s1.__eq__(s2)
print(s1 == s2)

# __lt__
# Python automatically calls s1.__lt__(s2)
print(s1 < s2)

# __add__
# Python automatically calls s1.__add__(s2)
print(s1 + s2)

# __contains__
# Python automatically calls s1.__contains__("Aj")
print("Aj" in s1)
#@property decorator : decorator used to define a method as a property (it can be accessed like an attribute).
#benefit : add additional logic when read, write, or delete attribute.
#gives you getter, setter and deleter method.
# @property decorator
# It allows us to access a method like an attribute.
# We can use:
# @property       -> GETTER
# @variable.setter -> SETTER
# @variable.deleter -> DELETER


class Student:

    def __init__(self, name, marks):
        self.name = name
        self._marks = marks

    # GETTER
    # Called when we access student.marks
    @property
    def marks(self):
        return self._marks

    # SETTER
    # Called when we change student.marks
    @marks.setter
    def marks(self, value):

        # Validate the marks
        if 0 <= value <= 100:
            self._marks = value
        else:
            print("Marks must be between 0 and 100")

    # DELETER
    # Called when we use del student.marks
    @marks.deleter
    def marks(self):
        print("Marks have been deleted")
        del self._marks


# Create an object
student = Student("Aj", 85)


# GETTER
print(student.marks)
# Python calls: student.marks -> marks()


# SETTER
student.marks = 95
# Python calls: marks(95)

print(student.marks)


# Invalid value
student.marks = 150
# Setter prevents invalid marks


# DELETER
del student.marks
# Python calls the @marks.deleter method