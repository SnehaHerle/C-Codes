#include<iostream>
#include<string>
using namespace std;
class Person
{public:
string name;
int age;
Person(){
name="Mr.RPandey";
age=40;
}
virtual void displayInfo()
{
cout<<"\nBase class displayInfo method is called.\n";
cout<<"Name: "<<name<<"\tAge: "<<age<<"\n";
}};
class Employee:public Person
{public:Employee()
{name="Mr.Yadav";age=33;}
void displayInfo()
{cout<<"\nDerived class displayInfo method is called.\n";
cout<<"Name: "<<name<<"\tAge: "<<age<<"\n";
}};
int main(void)
{Person *bp=new Employee();
bp->displayInfo();
//RUNTIMEPOLYMORPHISM
Person *bp1=new Person();
bp1->displayInfo();
return 0;
}
