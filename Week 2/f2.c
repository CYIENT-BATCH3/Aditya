//funtion with return type and with aurguments==

//programm 1
#include<stdio.h>
float sum(float,float);

int main()
{
    int x,y;
    printf("enter the value of x and y\n");
    scanf("%d %d",&x,&y);
    printf("sum = %f\n",sum(x,y));
    return 0;
}

float sum(float a, float b)
{
    return (a+b);
}
//End of P1

//programm 2
#include<stdio.h>
float sum(float,float,char);

int main()
{
    int x,y;
    char ch1='h';
    printf("enter the value of x and y\n");
    scanf("%d %d",&x,&y);
    printf("\nsum = %f\n",sum(x,y,ch1));
    return 0;
}

float sum(float a, float b, char ch)
{
    printf("\n%c",ch);
    return (a+b);
}
//End of P2

