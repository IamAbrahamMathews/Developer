#include <stdio.h>
#include <stdlib.h>

// A C Code to find the fibonacci numbers that takes no. of fibonacci numbers to be printed as input and to find the nth number amongst them.

int number=0,times=0,array[100];

void fibo(int number1,int number2)
{
  array[0]=number1;
  array[1]=number2;
  printf("%d,\t",number1);
  printf("%d\t",number2);
  for(int i=2;i<number+2;i++)
  {
   array[i]=array[i-1]+array[i-2];
   printf(",%d\t",array[i]);
  }
 
}


int main()
{   int number_of_times=0;
	int ch=0;
	printf("Enter the No. Of Times :");
	scanf("%d",&number);
	printf("The numbers are:");
	fibo(1,1);
	printf("\n1.Exit or");
	printf("\n2.Find the nth Number ?");
	scanf("%d",&ch);
	switch(ch)
	{
    	case 2:{printf("Enter the Nth Number:\t");
    		    scanf("%d",&number_of_times);
                printf("%d",array[number_of_times-2]);
               }
        case 1:{exit(0);}
    }
}