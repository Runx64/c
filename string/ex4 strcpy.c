#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Progamming with C";
    char target[20];

    strcpy(target, source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);

    char grade[2],msg[12];
    strcpy(grade,"B+");
    strcpy(msg,"very good");
    printf("Your grade is %s and you're %s.\n",grade,msg);
}
