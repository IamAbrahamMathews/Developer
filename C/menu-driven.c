#include <stdio.h>
#include <stdlib.h>

char stack[100];
int top=0;

void push(char item)
{
	top++;
    stack[top]=item;
}

void display()
{
	int pointer=top;
	while(pointer>=0)
	{
      printf("%c\n",stack[pointer]);
      pointer--;
	}
	printf("\n");
}
void pop()
{
    printf("%c\n",stack[top]);
	top--;
}

int main()
{printf("Menu-Driven Program:\n");
  int ch=0;
  char item;	
	do
	{

		printf("1. Enter a character\n");
		printf("2. Display a Character\n");
		printf("3. Remove top Character\n");
		printf("4. Exit the Program\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
			{
				case 1:{printf("Enter the character:\n");
						scanf("%s",&item);
						push(item);
					 	}
				break;
				case 2:{printf("Display the characters:\n");
						display();
						}
				break;
				case 3:{printf("Remove the top character:\n");
						pop();
						}
				break;
				case 4:exit(0);
			}
		
	}while(1);
}