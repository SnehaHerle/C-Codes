import java.util.Scanner;
class ExceptionHandling
{int result;
public void division(int num1,int num2)
{try
{result=num1/num2;}
catch(ArithmeticException e)
{System.out.println("\nException is caught:"+e);}
finally{System.out.println("\nResult:"+result);}
}public static void main(String args[]){int num1,num2;
Scanner sc=new Scanner(System.in);
System.out.println("\nEnter two Numbers:");
System.out.print("\nEnter First Number:");
num1=sc.nextInt();
System.out.print("\nEnter Second Number:");
num2=sc.nextInt();
System.out.print("\nResult of Division:");
ExceptionHandling eh=new ExceptionHandling();
eh.division(num1,num2);
}}
