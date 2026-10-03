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
class employee:
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
