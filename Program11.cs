using System;
namespace ConsoleApplication1
{public class Person
{
public int age;
public String name;
public Person()
{}
public Person(String n,int a)
{name=n;
age=a;
}
public virtual void displayDetails()
{Console.WriteLine("Name:"+name);
Console.WriteLine("Age:"+age);
}
}
class Employee:Person
{public Employee(String s,int a)
{name=s;
age=a;
}public override void displayDetails()
{Console.WriteLine("\nEmployee Name: "+name);
Console.WriteLine("\nEmployee Age: "+age);
}}
class Program
{static void Main(string[] args)
{Person p=new Employee("Mr.Yadav",33);
Console.WriteLine("\n**********Dynamic Polymorphism Example**************\n");
Console.WriteLine("\n*************Employee Details*******************\n");
Console.WriteLine("*\nFirst Employee Details*\n");
p.displayDetails();
Person p1=new Employee("Mr.Pandey",35);
Console.WriteLine("*\nSecond Employee Details*\n");
p1.displayDetails();
Console.WriteLine("\n*************************************************\n");
Console.ReadKey();
}}}
