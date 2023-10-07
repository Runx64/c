#include <stdio.h>

int main()
{
    char name[15];
    char lang[10];

    printf("Enter your name: ");
    scanf("%s", name);
    //gets(name);
    //scanf("%s", &name[0]);
    printf("Enter your language: ");
    scanf("%s", lang);

    printf("Hi %s.\n", name);
    printf("You might be a %s programmer.\n", lang);

    return 0;
}
