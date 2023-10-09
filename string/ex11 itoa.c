#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int i;
   char buffer[8];
   printf ("Enter a number: ");
   scanf("%d",&i);
   itoa (i,buffer,10); //10 for decimal
   printf ("Decimal to string : %s\n",buffer);
   printf ("First Number: %c\n",buffer[0]);
   printf ("Second Number: %c\n",buffer[1]);
}


