//A C code to find the totient function

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mant=0,expo=0;
int composite1=0,composite2=0;
int power(int number)
{
    for(int i=1;i<number;i++)
    { for(int j=1;j<number;j++)
        if(pow(i,j)==number)
        {   mant=i;expo=j;
            return 1;
            
        }
    }
    return 0;
}

int prime(int number)
{
    for(int i=2;i<number;i++)
    {
     if(number%i==0)
     {
         return 0;
     }
    }
    return 1;
}

int composite(int number)
{
    for(int i=2;i<number;i++)
    {for(int j=2;j<number;j++)
     {
      if(i*j==number && prime(i)&&prime(j)==1)
      {
       composite1=i;
       composite2=j;
      }
     }
    }
    return 1;
}

int main()
{   int result=0,number=0,actual=0;
    printf("Enter the Number:");
    scanf("%d",&number);
    if(prime(number)==1)
    {
       result=number-1;
       printf("%d\n",1);
    }
    else if(power(number)==1)
        {
            actual=pow(mant,expo)-(pow(mant,expo-1));
            result=actual;
            printf("%d\n",2);
        }
    
    else
        {
           composite(number);
           result=(composite1-1)*(composite2-1);
           printf("%d\n",3);
        }
printf("%d\n",result);
   return 1; 
}