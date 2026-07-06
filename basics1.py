#CLASS : They allow us to create our own data types. A class is a blueprint for creating objects. An object is an instance of a class. Classes encapsulate data for the object and methods to manipulate that data.
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
