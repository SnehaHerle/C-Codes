class Person
{int age;
String name;
Person(String n,int a)
{name=n;age=a;}
void displayDetails()
{System.out.println("\nBase class method is called.");
System.out.println("Name: "+name);
System.out.println("Age: "+age);}}
class Employee extends Person
{Employee(String n,int a)
{super(n,a);}
void displayDetails()
{System.out.println("\nDerived class method is called.");
System.out.println("Name: "+name);
System.out.println("Age: "+age);
}}
class DynamicPolymorphism
{public static void main(String args[])
{Person p= new Employee("Mr.Yadav",32);
System.out.println("\n***********Display Employee Details**************\n");
Person p1= new Person("Mr.Pandey",35);
p.displayDetails();
p1.displayDetails();
}}
