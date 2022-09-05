//ksajdhkasdfhkasfhkasjfhkasjfhkasjfhkasfhkschkjbsaiguicuhsadc
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    char ch1,ch2,ch3;
    float f1,f2,f3;
    int sum=0;
    float sum1=0,res=0;
    int sum2=0;
    
    printf("enter the integer values\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("enter the charecter values\n");
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    printf("enter the float values\n");
    scanf("%f %f %f",&f1,&f2,&f3);
    //to print all the input values
    printf("the values of integer is %d %d %d %d\n",a,b,c,d);
    printf("the values of char is %c %c %c \n",ch1,ch2,ch3);
    printf("the values of float is %f %f %f\n",f1,f2,f3);
    //to print sum of floating point
    sum1 = f1+f2+f3;
    printf("the sum of floating values are %f\n",sum1);
    sum2 = f1+f2+f3;
    printf("the sum of floating values are %d\n",sum2);
    //to print sum of integr values and div it by sum of float values
    sum=a+b+c+d;
    printf("the sum of the integer values are=%d\n",sum);
    res = sum/sum1;
    printf("the result is %f\n",res);
    
    return 0;
}
//sldjaslkdjsafjoaisjlskjfhfiwfhshdjksfhkjsdfhiuwfwjsfksdhfiuskjsf





//to print hexadecimal values skdfhsadufhiauhckjshciushfdhskjhskdhksh
#include<stdio.h>
int main()
{
    int hex_value;
    printf("enter the hex_value\n ");
    scanf("%d",&hex_value);
    printf("the value entered is=%x\n",hex_value);
    return 0;
}
//sjdfgsjdfsldfhsalufhiuwefhksjhushfsdajfjhfsgfjsgfjsdgugfasgfhjsgjgs




//zkdjghkdghkjdhkjdghdkjghughoaijoidsjfiwejifkjshdfjhiofsjdkfjoiwjeafjoi
#include<stdio.h>
int main()
{
    char c1,c2,c3,c4,c5;
    printf("enter the char value\n");
    scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
    printf("the chareter entered are %c %c %c %c %c\n",c1,c2,c3,c4,c5);
    printf("the ascii value of enterd charecters are c1=%d c2=%d c3=%d c4=%d c5=%d\n",c1,c2,c3,c4,c5);
    return 0;
}
//sdfkjhsdufhjshfjhfuawehsjbfhbsjfhajhdkjhhjfhjsfhjshdfjskdjhflajkhkfjak


//kjsdkljshdkjsdfhkjshdflkjsdhkskdfhksjdfhkjsfhkjsdfhkjshfkjshfdkjhsdkfjwiu
#include <stdio.h>
enum LCD{clear=0x01,display=0x08,first_line=0x80,second_line=0xc0};
int main()
{
    printf("clearing the lcd screen %x \n",clear);
    printf("turning on the display in LCD %x \n",display);
    printf("to print the value in first line %x \n",first_line);
    printf("hello \n");
    printf("clearing the lcd screen %x \n",clear);
    printf("turning on the display in LCD %x \n",display);
    printf("to print the value in second line %x \n",second_line);
    printf("good morning");
    return 0;
}
//ksjdisdkjsksdhuwhkjsdfhksdjksdjfwiefweljdswqjdljdlkwjadliajdklasjdlkjasdlkas

//osfhkjsdahfkjashdfiuhfjsdkjfhaksdfhaksjfdhkaslhsadkfjhaslkfwiuefhfjksadhfkjs
#include<stdio.h>
struct employe
{
    int id;
    char name[20];
    char address[40];
};
int main()
{
    struct employe e1;
    printf("enter the employe details\n");
    scanf("%d",&e1.id);
    scanf("%s",e1.name);
    scanf("%s",e1.address);
    printf("the details of the employe is=\n");
    
    printf("id of the employe is =%d\n",e1.id);
     printf("name of the employe is =%s\n",e1.name);
      printf("address of the employe is =%s\n",e1.address);
      return 0;
    
}
//s;lkdfjalsjdflasjdfasfkjdhfiuqwkjsakdjfkjasdhfkjashfsfkjsdfkjsfkjdskfjhksjfdasjfd


//ksjdfhjksfdhksajfdhfshdkjfhiuwhfkjsdfkjsdkflahkdjsagfjshdjhgjsdahgfjshfgjshfjsfgj
#include<stdio.h>
union employe
{
    int id;
    char name[20];
    char address[40];
};
int main()
{
    union employe e1;
    printf("enter the employe details\n");
    scanf("%d",&e1.id);
    scanf("%s",e1.name);
    scanf("%s",e1.address);
    printf("the details of the employe is=\n");
    
    printf("id of the employe is =%d\n",e1.id);
     printf("name of the employe is =%s\n",e1.name);
      printf("address of the employe is =%s\n",e1.address);
      return 0;
    
}
//kjshdkjshdkjshadkjfhakuhiuwhkjsdfjsdfhskjsjhgfjhsfgjshfguywfgsdhsjhdsgjsdhgfywgfs
    
	
//kjsdlkuashuashfkjshfiuwehkjaskshuHKJSHGGFUYWGESHDDIUEXJKUHUIHuhsdkjksdfhuhjsdjhsd
#include<stdio.h>
struct employe
{
    int id;
    char name[20];
    char address[40];
}e[5];
int main()
{
    int i;
    printf("enter the 5 employe details\n");
    for(i=0;i<=5;i++)
    {
     printf("enter the id\n");
     scanf("%d",&e[i].id);
     printf("enter the name of employe\n");
     scanf("%s",e[i].name);
     printf("enter the address\n");
     scanf("%s",e[i].address);
     
    }
    
    printf("the details of the employe is=\n");
    for(i=0;i<=5;i++)
    {
    
    printf("id of the employe is =%d\n",e[i].id);
     printf("name of the employe is =%s\n",e[i].name);
      printf("address of the employe is =%s\n",e[i].address);
    }
      return 0;
    
}
//sFDJHKSAJFDHKSJFDHASUIFWIjADSDFKJSKJSHFKJSHFKJSKJFkjsdadhkjshfduhwfskjdfkjasdfu


//uAHIUAHDKASHDAHUHhskjdhkjsdfhsfakjhsdkjhksjahjkjhajshfwyjhznczbsuwcjsdjfjkxcbn
#include <stdio.h>

int main()
{
 int binary_number,masked_binary_number,get_bit;
 
 printf("enter the binary number\n");
 scanf("%d",&binary_number);q
 printf("enter the masking bit\n");
 scanf("%d",&masked_binary_number);
 masked_binary_number=masked_binary_number << 4;
 get_bit = binary_number&masked_binary_number;
 printf("the bit we got is = %x\n",get_bit);
    return 0;
}
//skjfhahifusjfhkjshfuwhejkfsdkjfiuhafhkdjfhiufbcjxcuwehcjsdjsjdfsfhuhfksfufhwjfdf

//skldfhkjsdfhsdhfjksdhfiuwjksduwdkjkdiuhhsjfuweskdhusjkdhasdkjlfklsajdfiuwhshdfjksfh
#include <stdio.h>

int main()
{
   int radius;
   float pi,area;
   printf("enter the radius of circle\n");
   scanf("%d",&radius);
   pi=3.1415;
   area = pi*(radius*radius);
   printf("the area of circular garden that has to be covered with grass is = %f",area);
   return 0;
}
//kjeqhkjshjkfwiuehjkasjkhfuiasdjkasdfjwuiehjkasjkdfcnzjncjkshdfhwhflsakjdfhihwuhjkhdfjdsf

//hgjhddsdadsfdghjhkhkhjhkjgyuytdressfhikhkhkhugtdeswkhioijiojjjoijjjiojoijojfgesrccbcgfc
#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("enter the number\n");
    scanf("%d",&num);
   while(num!=0)
    {
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    }
    printf("the rev number is = %d",rev);
    return 0;
}
//safdsfdsdgdytfyhijkjkjijlklhhgfdsawsghijkklkljlkhkkujkjjjkhhhjkljhjhjghgfggffgtttryyiuyt

#include<stdio.h>
int main()
{
    int num,rev=0,rem,count=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        num = num/10;
        count ++;
    }
    printf("count=%d\n",count);
   while(num!=0)
    {
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    }
    printf("the rev number is = %d",rev);
    return 0;
}

//hjskjadkjasdjfjfasjkdiuwjsafjhsdfjajsfksakjdfkjskjsfkjsfdkjskjfaiushfkjsdhfkjsafdsdf
#include<stdio.h>
#include<math.h>
int main()
{
    int num,rev=0,rem,count=0;
    printf("enter the number\n");
    scanf("%d",&num);
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    printf("the rev number is = %d\n",rev);
    
       
    return 0;
}

//jasdhfkjslksauiwahsfjsdlfkskjdfkjsfsfsfkjjhhjsdfhsjjjkjsfkjskjsfkjkfjkjsd


//jdkjashdkjadskldidahskjsadjklhskjhaskjsdfhsdiwuekjasdlasdkasdisajdlkasjdlkajdo
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter thw values for a and b\n");
    scanf("%d %d",&a,&b);
    ((a>=b)?printf("true"):printf("false"));
    return 0;
    
}
//asjkhkjasflhkjsdafweifsdjksdjzkjsdfjhiuhefwhufjdksafjxkz,mnvjhfjsdjdjjiajdkjaksjdi

//sakjdhAJDSKJadhkJADKJASDHKJASHDJSDAJSJDHjhsadjhadsgsdhjfhajsdhfjkahsdjhasjdhfsa
#include<stdio.h>
int main()
{
	int num = 8;
	printf ("%d %d", num << 1, num >> 1);
	return 0;
}
//kjaHDKHASDKJHJHggvnvhgvbnvhhgfbnhgfhfhffhfhfghffgdgdytfgfjgjhggghghjghfgfhfgfghf

//kjsadhklHDJgsdjhadsgjhsadgjfhgsajhdfjsfdhjasfdkjsdafksjadfhkjshfuahjskuhdjaksdhas
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter thw values for a and b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    (!((a<b)&&(c<b))?printf("true"):printf("false"));
    return 0;
    
}
//lisdfhkusajdhfkasjdfhskjdahfkjshadfkjshdfkjhskjdfhiawufsehkjsahdfkjhsadkfhaiusfh

//aksjdkjsadfhksjadfhksajfhksjfdkjsadfhwuuehfkjsdfkjhsafiuhwskfjhksjdfhukwehsfkjshdkj
#include<stdio.h>
int main()
{
    int ball1,ball2,ball3,ball4,ball5;
    printf("enter the value of each balls\n");
    scanf("%d %d %d %d %d",&ball1,&ball2,&ball3,&ball4,&ball5);
    ((ball1%2==0)?printf("even\n"):printf("odd\n"));
     ((ball2%2==0)?printf("even\n"):printf("odd\n"));
      ((ball3%2==0)?printf("even\n"):printf("odd\n"));
       ((ball4%2==0)?printf("even\n"):printf("odd\n"));
        ((ball5%2==0)?printf("even\n"):printf("odd\n"));
        return 0;
    
}
//ksjdfkjsadfkjsfsjdfhkjsfhjksfhksjfhskjdhfhuwefhjshfuwejsdjfhjsdfsdfksdfjsudfhjskdfhks

//edksdjhfksajdfhksjdfhkjsadhfkjshdfjkskdfwkjfhskfjksjdfkjsdfhkjiufhkjsdfhkjsdfhksdfhiu
#include<stdio.h>
int main()
{
int a,b,c,big;
printf("\nEnter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
big=(a>=b&&a>=c?printf("a\n"):b>=c?printf("b\n"):printf("c\n"));
//printf("\nThe biggest number is:%d",big);
return 0;
}
//sajlhdjaksdioqjdlkajsdjqowdjakjsdkjHDJASJADKJAHSDKAHDAJJSDKJASDQDkjasdjkasdhdjsaddas

//kasdjfjksadfkjsadoijdaijalkjsadjhsjkoiwjdsadjkasdfkjaskdjfeahfsdjfsdjfsjfdsfdkjfiuhs
#include<stdio.h>
int main()
{
    int num,binary=0,rem;
    printf("enter the num which has to converted to binary\n");
    scanf("%d",&num);
    while(num>=1)
    {
    binary=rem=num%2;
    num=num/2;
    
    printf("%d",binary);
    }
    return 0;
}
//lskdjflskfdjlasakfjoahfsdfkjaskjfsdjkfsdkjfskfjksjfksjlfdahsjdfhksjfhksjdfkjsfhkjasdfhu


//sajdaDKJAdiqosdkjdskjsadksadfjiwejfsdfkjsadfhkjwiuawefhusdkjlasfhjksfkjalsakjsdhfkjsdfk
void getBinary(int);

int main()
{
	int num=0;
	printf("Enter an integer number :");
	scanf("%d",&num);
	printf("\nBinary value of %d is =",num);
	getBinary(num);
	return 0;
}

/*Function definition : getBinary()*/
void getBinary(int n)
{
	int loop;
	/*loop=15 , for 16 bits value, 15th bit to 0th bit*/
	for(loop=15; loop>=0; loop--)
	{
		if( (1 << loop) & n)
			printf("1");
		else
			printf("0");
	}
}
//sjfkjshfkjshdkhsfhakjfsdkjhskhjkwfiuauisdfksjfkjsdfusfhsfhksjhfkjsfjkskjjkfjsdfjksjkdfj

//ragfdsfdgdfsfsfgdfsgfdsdgdsfgdfsdfgdfgfdsgsdfgdsfgdfgdsfgdsfgdsdfssdfgsd,ajfhjhsdabjfhs
#include <stdio.h>

int main()
{
    int num,rem=0,res=0;
    printf("enter the value of num \n");
    scanf("%d",&num);
    while(num>0)
    {
        
        rem = num%10;
        res = res + rem;
        num = num/10;
        
    }
    printf("the result is=%d\n",res);
    return 0;
}
//.ksjdhkjsadfhkjsdfjksdfjasfdkjasfdhyajsgdfjksadfgjgfjhgsdjasdhgfjhsdgfjhsdgjhsdjhsdsdf

//sklajdhksajdhjkashduqhdjashdjsjsjsjsjashdkjashkjshdkfjhskdjfhkjsdfsdfsadfsadasdfsdfsdf
#include<stdio.h>
int main()
{
    int range,even_num=0;
    printf("enter the range\n");
    scanf("%d",&range);
    while(range>0)
    {
        even_num = even_num + 2;
        printf("%d\n",even_num);
        range--;
    }
    
    return 0;
}
//ashdklsjadfjsdfhoiwejfjsakjdfhkjsdkjfuwshfkjshdfkjshdkfjhsudfhskjasdhkfksjhdfkjshufwfu

//sdjfhksdhfkjsahdkjsakjdskjdhkjsdkjasdfhsjkdfhsjfwejsdjkfhskjdfhkjsdjahhsdkjsdkajhkjash
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the range n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
    return 0;
}
//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd

//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the range n\n");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        if(i%2==0)
        {
            printf("the even number series is=\n");
            printf("%d\n",i);
        }
        i--;
    }
    
    return 0;
}
//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd


//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the range n\n");
    scanf("%d",&n);
    
    do 
    {
        printf("%d\n",i);
        i++;
    }while(i<=n);
    
    return 0;
}
//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd

//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd
#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}
//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd

//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd   
	
#include<stdio.h>
int main()
{
    long int num,factorial=1,i=1;
    printf("enter the num \n");
    scanf("%ld",&num);
    
    while(i<=num)
    {
        factorial =  factorial*i;
        i++;
         
    }
    printf("the factorial of num =%ld",factorial);
   
    
    return 0;
}	
//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd

//ksahdfjsdjfakjsdhfkjhsdakjfhkjsdkjashdjkfkjsakjdhskjksjdjksdfkajkshfkjashkdjkjsahkjhjsd
#include <stdio.h>
 
int main()
{
  int i, Number, count, Minimum, Maximum; 
  
  printf("\n Please Enter the Minimum & Maximum Values\n");
  scanf("%d %d", &Minimum, &Maximum);
  Number = Minimum; 
  
  printf("Prime Numbers Between %d and %d are:\n", Minimum, Maximum);    
  while(Number <= Maximum)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
      }
      i++;	
    }	
    if(count == 0 && Number != 1 )
    {
       printf(" %d ", Number);
    }
    Number++; 
  }
  return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf


//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
   int i,n,count=0;
   printf("enter the number range\n");
   scanf("%d",&n);
   while(i<=n)
   {
       if(n%i==0)
       {
           count++;
       }
       i++;
       if(count == 2)
       {
           printf("%d it is prime",n);
           
       }
       else
       printf("it is not prime");
   }
    
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    int i=1,j=1,n=0,count=0;
    while(n<100)
    {
        j=1;
        count=0;
        while(j<=i)
        {
            if(i%j==0)
            {
                count ++;
                j++;
            }
            if(count==2)
            {
                printf("%d\n",i);
                n++;
            }
            i++;
        }
    }
   
    
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    int i;
    printf("the natural number are=\n");
    for(i=1;i<=100;i++)
    {
    printf("%d\n",i);
    }
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf


//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    int i,num,mul;
    printf("enter the value of num\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
     mul=num*i;    
     printf("%d*%d=%d\n",num,i,mul);
    }
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    int i;
    
    for(i=0;i<=5;i++)
    {
     if(i==4)continue;
     printf("%d",i);
    }
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    int i;
    
    for(i=0;i<=5;i++)
    {
     if(i==4)break;
     printf("%d",i);
    }
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf


#include<stdio.h>
int main()
{
    unsigned int i,a;
    printf("enter the hexa_dec_values\n");
    for(i=1;i<=10;i++)
    {
      scanf("%x",&a);
      if((a>0x05)&&(a<0xf1))
      {
          printf("%x\n",a);
      }
      else{
          
          
          printf("it is a noise\n");
          
      }
      
    //scanf("%d %d %d %d %d %d %d %d %d %d",&hex1,&hex2,&hex3,&hex4,&hex5,&hex6,&hex7,&hex8,&hex9,&hex10);
    }
      
    //printf("%x %x %x %x %x %x %x %x %x %x",hex1,hex2,hex3,hex4,hex5,hex6,hex7,hex8,hex9,hex10);
    //if((hex1>=5)&&(hex1<=251))
    //{
      //  printf("hex1=%x",hex1);
    //}
    
    
    return 0;
}
    
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

    
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include<stdio.h>
int main()
{
    unsigned int i,a;
    printf("enter the hexa_dec_values\n");
    for(i=1;i<=10;i++)
    {
      scanf("%x",&a);
      if((a>0x05)&&(a<0xf1))
      {
          printf("%d\t",i);
          printf("%x\n",a);
          
      }
      else{
          
          printf("%d\t",i);
          printf("it is a noise\n");
          
      }
      
    //scanf("%d %d %d %d %d %d %d %d %d %d",&hex1,&hex2,&hex3,&hex4,&hex5,&hex6,&hex7,&hex8,&hex9,&hex10);
    }
      
  
    
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include <stdio.h>

int main()
{
    int num,arm_num=0,rem=0,res=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
    rem = num%10;
    res = (rem*rem*rem);
    num = num/10;
    arm_num = arm_num+res;
    }
    printf("the num is =%d",arm_num);
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include <stdio.h>

int main()
{
    int num,arm_num=0,rem=0,res=0,num1;
    printf("enter the numbers\n");
    scanf("%d %d",&num,&num1);
    
    while(num>0)
    {
    rem = num%10;
    res = (rem*rem*rem);
    num = num/10;
    arm_num = arm_num+res;
    }
   if(num1 == arm_num)
    {
        printf("the entred number is armstrong number\n");
    }
    else
    {
    printf("the entred number is not a armstrong number\n");
    }
    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include <stdio.h>

int main()
{
    int a[4][4],i,sum=0,j;
    printf("enter the elements of matrix\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i-j==0)
            {
                sum=sum+a[i][j];
            }
            
        }
        
    }
    printf("the sum of dioganal number is =%d\n",sum);
    

    return 0;
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
#include <stdio.h>
int x=10,y=10;
void sum()
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
void main()
{
    sum();
    sub();
    mul();
    divison();
}
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf


//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
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
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
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
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf
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
//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf

//kjlksajdlkajsdlkjsalkjasjasdlkasdfkljhskadjhfkjsadfkjahskdlfhiuwefkjsdkjfksjdfkjsdfkhwiuf



















