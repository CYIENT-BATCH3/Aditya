//Programm 1
#include <stdio.h>

void camera_function(int application)
{
  
        //while(GPS == 1)
        {
            switch(application)
            {
            case 1:
            printf("Take a picture\n");
            break;
            case 2:
            printf("strating recording video\n");
            break;
            case 3:
            printf("display 10 images\n");
            break;
            case 9:
            printf("break");
            break;
            }
        }
}
int main()
{
    int a,GPS;
    
    
    printf("enable the GPS function\n");
    scanf("%d",&GPS);
    if(GPS==0)
    {
        printf("go to settings and Please enable the GPS\n");
    }
    else
    {
         printf("GPS is enabled\n");
         printf("select the value for desired application\n1 for Taking Picture\n2 for Record Video\n3 to List 10 imagers\n9 for Break\n");
         scanf("%d",&a);
         camera_function(a);
    }
    return 0;
}


//programm 2
#include <stdio.h>

void phone_function(int application)
{
  
        //while(GPS == 1)
        {
            switch(application)
            {
            case 1:
            printf("call function activated\n");
            break;
            case 2:
            printf("message function activated\n");
            break;
            case 3:
            printf("call receive mode activated\n");
            break;
            case 9:
            printf("break");
            break;
            }
        }
}


int main()
{
    int a;
         printf("select the value for desired application\n1 for calling\n2 for messaging\n3 to receive the call\n9 for Break\n");
         scanf("%d",&a);
         phone_function(a);
    return 0;
}