#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Perfectly Balanced no. of x and y in any given input string
   */
int main()
{char S[100];
 int count1=0;
printf("Enter the String:\n");
scanf("%s",S);
for(int i=0;i<strlen(S);i++)
{
    if(S[i]=='x')
    {
        count1++;
    }
    else if(S[i]=='y')
    {
        count1--;
    }
}
if(count1==0)
{
    printf("Perfectly Balanced\n");
}
else
{
    printf("Not Perfectly Balanced\n");
}
}