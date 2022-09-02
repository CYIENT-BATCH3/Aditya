//funtion without return type and with aurguments==

#include<stdio.h>
void sum(int,int);  
void sub(int,int);
void mul(int,int);
void division(int,int);
void main()
{
    int m,n;
    printf("enter the value of m and n\n");
    scanf("%d %d",&m,&n);
    sum(m,n);
    sub(m,n);
    mul(m,n);
    division(m,n);
}

void sum(int x,int y)
{
    printf("sum=%d\n",x+y);
}
void sub(int f,int g)
{
    printf("sub=%d\n",f-g);
}
void mul(int a,int b)
{
    printf("mul=%d\n",a*b);
}
void division(int x,int y)
{
    printf("div=%d\n",x/y);
}
