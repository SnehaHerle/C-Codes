#include<iostream>
#include<string>
using namespace std;
class person
{
private:
int age;
string name;
public:
void setdata(string n,int a)
{
name=n;
age=a;
}
void display()
{
cout<<"\nEmployee name: "<<name<<"\tAge: "<<age;
}
};
class employee:public person
{private:
string empID;
public:
void setempID(string id)
{
empID=id;
}
void displayempID()
{
cout<<"\nEmployeeID: "<<empID<<"\n";
}
};
int main()
{
employee e1,e2;
e1.setdata("Mr.RPandey",40);
e1.setempID("UITCSE001");
e2.setdata("Mr.PYadav",33);
e2.setempID("UITCSE001");
cout<<"\n..............Employee Details..................\n";
e1.display();
e1.displayempID();
e2.display();
e2.displayempID();
cout<<"\n.......................................................\n";
return(0);
}
