#include<iostream>

#include<string>

using namespace std;

class employee

{

private:

int age;

string name;

public:

void setdata(string n, int a)

{

name = n;

age = a;

}

void display()

{

cout<<"\nEmployee name: "<<name<<"\tAge: "<<age<<"\n";

}

};

int main()

{

string name1, name2;

int age1, age2;

cout<<"\n******* Enter Employee details ********\n";

cout<<"\nFirst employee name: ";

cin>>name1;

cout<<"\nFirst employee age: ";

cin>>age1;

cout<<"\nSecond employee name: ";

cin>>name2;

cout<<"\nSecond employee age: ";

cin>>age2;

employee e1,e2;

e1.setdata(name1, age1);

e2.setdata(name2, age2);

cout<<"\n\n.............. Display Employee Details ..................\n";

e1.display();

e2.display();

cout<<"\n......................................................\n";

return(0);
}
