#include <stdio.h>
#include <stdlib.h>
/* Enter elements into the stack and pop elements out of it.
   Basically creating a string of values and entering and exiting it one way or the other.
   */
int top=0,stack[100];

int push(int item)
{   
  stack[top++]=item;
}

int pop()
{
    return stack[--top];
}
 void display()
 {
     for(int i=0;i<=top;i++)
     {
         printf("%d",stack[i]);
     }
 }

int main()
{
    printf("Menu Drive Program:\n");
    int ch=0,item=0;
    printf("1: Insert the Item into Stack\n 2: Pop top element from the stack\n 3:Display the entire stack\n");
    do
   { printf("Enter the choice:\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
       case 1:printf("Insert the item:\t");scanf("%d",&item);push(item); 
       break;
       case 2:printf("The Popped Element from the stack is: %d",pop());
       break;
       case 3:printf("The Elements of the Stack are:");display();
       break;
       default:printf("invalid Statement\n");exit(0);
    }
   }while(ch!=0);
   return 1;
}