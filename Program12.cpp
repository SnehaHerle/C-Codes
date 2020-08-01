#include<iostream>
using namespace std;
int division(int a,int b)
{return (a/b);
}
int main()
{int num1,num2,result;
cout<<"\n*******Enter Two Numbers********\n";
cout<<"\nEnter First Number:";
cin>>num1;
cout<<"\nEnter Second Number:";
cin>>num2;
try{
result=division(num1,num2);
}
catch(exception &e)
{cout<<"Exception is Caught: Divisionby0:";
cout<<e.what();
}
cout<<"\n..............Display Result..................\n";
cout<<"Result:"<<result;
cout<<"\n......................................................\n";
return(0);
}
