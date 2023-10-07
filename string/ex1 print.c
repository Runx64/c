/* Program name exam701.cpp */
#include <stdio.h>
#include <string.h>
void main()
{
/* initializing strings */
char txt1[]= {'H','e','l','l','o',' ','C','\0'};
char txt2[]= {'H','e','l','l','o',' ','C'};
char txt3[8] = {'H','e','l','l','o',' ','C','\0'};
char txt4[]= "Hello C";

int size = 7;

printf("txt1 = %s\n",txt1);
printf("txt2 = %s\n",txt2);
printf("txt3 = %s\n",txt3);
printf("txt4 = %s\n",txt4);
printf("%c = ", txt1[size-1]);
printf("%c = ", txt2[size-1]);
printf("%c = ", txt3[size-1]);
printf("%c\n", txt4[size-1]);
}
