#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Anakin";
    int length = strlen(name);
    printf("\"%s\" is %d characters string\n", name, length);
    printf("Length of \"C Language\" is %d\n", strlen("C Language"));
    return 0;

    //เขียนโปรแกรมหา strlen โดยไม่ใช้ strlen
}
