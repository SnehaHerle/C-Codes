#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
        int i,flag=0;
        int arr[argc];
        printf("argc is %d\n",argc);
        for(i=0;i<argc;i++)
        {
                printf("Value of argv[%d] is: %s\n", i, argv[i]	);
        }
        for(i=1;i<argc;i++)
        {
                arr[i-1]=atoi(argv[i]);
                printf("Value of arr[%d] is: %d\n", i-1, arr[i-1]);
        }
        int n= sizeof(arr)/sizeof(arr[0]);

        printf("n is %d\n",n);
        /*for(i=0;i<n;i++)
        {
        printf("Value of arr[%d] is: %d\n", i, arr[i]);
        }*/

        /*for(i=0;i<n;i++)
        {
        if(arr[i]!=arr[n-i-1])
        {
        printf("arr[i] is %d\n",arr[i]);
        printf( " arr[n-i-1] is %d\n" ,arr[n-i-1]);
        printf("Number is not a palindrome\n");
        flag=1;
        break;
        }
        }
        if(flag==0)
        {
        printf("Number is a palindrome\n");
}*/
        int number = atoi(argv[1]);
        printf("%d\n",number);
        int y = number;
        int reverse = 0;
        int r,q;
        while(y!=0)
        {
                r = y%10;
                reverse = reverse*10 + r;
                y = y/10;
        }
        if(number == reverse)
                printf("Palindrome\n");
        else
                printf("Not a palindrome\n");
        return 0;
}
