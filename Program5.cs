using System;
public class Employee
{
private int age;
private string name;
public void setdata(string n,int a)
{
name=n;
age=a;
}
public void display()
{
Console.WriteLine("\nEmployee name: "+name+"\tAge: "+age+"\n");
}
}
public class Mainclass
{
public static void Main(string[] args)
{
Employee e1=new Employee();
Employee e2=new Employee();
Console.WriteLine("\n..............Enter Employee Details..................");
Console.WriteLine("\nEnter First Employee Name: ");
string name1=Console.ReadLine();
Console.WriteLine("\nEnter First Employee age: ");
string a1=Console.ReadLine();
int age1 = Convert.ToInt32(a1);
Console.WriteLine("\nEnter Second Employee Name: ");
string name2=Console.ReadLine();
Console.WriteLine("\nEnter Second Employee age: ");
string a2=Console.ReadLine();
int age2 = Convert.ToInt32(a2);
e1.setdata(name1,age1);
e2.setdata(name2,age2);
Console.WriteLine("\n..............Employee Details..................\n");
e1.display();
e2.display();
Console.WriteLine("\n..........................................................\n");
Console.Read();
}
}
