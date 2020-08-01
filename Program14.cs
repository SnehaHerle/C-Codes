using System;
namespace ConsoleApplication2
{class Program
{int result;
Program()
{result=0;
}
public void division(int num1,int num2)
{try
{result=num1/num2;
}catch(DivideByZeroException e)
{Console.WriteLine("\nException is caught:{0}",e);
}
finally{Console.WriteLine("\nResult:{0}",result);
}}
static void Main(string[] args)
{int n1,n2;
Program p=new Program();
Console.WriteLine("\n***Exception Handling Program***\n");
Console.WriteLine("\nEnter Two Numbers:\n");
Console.Write("\nEnter First Number:");
n1=int.Parse(Console.ReadLine());
Console.Write("\nEnter Second Number:");
n2=int.Parse(Console.ReadLine());
Console.Write("\nResult of Division:");
p.division(n1,n2);
Console.ReadKey();
}}}
