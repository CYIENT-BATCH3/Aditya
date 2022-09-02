//function without return type and without arguments
//Programm 1
#include <stdio.h>
int x=10,y=10; //declaring the values of variable 
void sum(); //declaration of function
void sub();
void mul();
void divison();
void main()
{
    sum(); //calling function
    sub();
    mul();
    divison();
}

void sum()//implementation of function
{
    printf("%d\n",x+y);
}
void sub()
{
    printf("%d\n",x-y);
}
void mul()
{
    printf("%d\n",x*y);
}
void divison()
{
    printf("%d\n",x/y);
}
//End of P1

//Programm 2
#include<stdio.h>
void swap()
{
    int a,b,temp;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    
    temp = b;
    b=a;
    a=temp;
    printf("the value of a=%d,b=%d\n",a,b);
   
}
void main()
{
    swap();
}
//End of P2

//Programm 3
#include<stdio.h>
void swap()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("the value before swapping a=%d,b=%d\n",a,b);
    c=a+b;
    a=c-a;
    b=c-a;
    printf("the value after swapping a=%d,b=%d\n",a,b);
   
}
void main()
{
    swap();
}
//End of P3