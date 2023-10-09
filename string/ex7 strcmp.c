#include <stdio.h>
#include <string.h>
int main()
{
    char car1 [] = "BMW" ;
    char car2[] = "AUDI" ;
    int x,y,z;
    x = strcmp(car1,"BMW") ;
    y = strcmp(car1,car2);
    z = strcmp(car1,"BMX") ;
    printf("%d %d %d\n",x,y,z) ;
}
