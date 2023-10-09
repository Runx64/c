#include <stdio.h>
#include <string.h>
int main()
{
    char txt1[] = "Programming with C ";
    char txt2[] = "is very easy.";
    strcat (txt1,txt2);
    printf("txt1 string = %s\n", txt1);
    printf("txt2 string = %s\n", txt2);
}
