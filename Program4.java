import java.util.Scanner;
class employee
{
private int age;
private String name;
void setdata(String n,int a)
{
name=n;
age=a;
}
void display()
{
System.out.println("\nEmployee name: "+name+"\tAge: "+age+"\n");
}
}
class MainClass
{
public static void main(String args[])
{
employee e1=new employee();
employee e2=new employee();
Scanner sc=new Scanner(System.in);
System.out.println("\n..............Enter Employee Details..................");
System.out.print("\nEnter First Employee Name: ");
String name1=sc.nextLine();
System.out.print("\nEnter Second Employee Name: ");
String name2=sc.nextLine();
System.out.print("\nEnter First Employee Age: ");
int age1=sc.nextInt();
e1.setdata(name1,age1);
System.out.print("\nEnter Second Employee Age: ");
int age2=sc.nextInt();
e2.setdata(name2,age2);
System.out.println("\n..............Employee Details..................\n");
e1.display();
e2.display();
System.out.println("\n...................................................\n");
sc.close();
}
}
