#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "STRING.H";
    char name[] = "ironman";
    printf("text = %s\n", text);
    printf("text = %s\n", strlwr(text));  //lower
    printf("name = %s\n", strupr(name));  //upper
}
