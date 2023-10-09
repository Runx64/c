#include <stdio.h>
#include <stdlib.h>
void main() {
double d;
d = atof ("99.0");
printf ("The string \"99.0\" converted to double is %.3f\n", d);
printf ("The converted value divided by 2 is %.3f\n\n", d/2);

int i;
i = atoi ("100");
printf ("The string \"100\" converted to int is %d\n", i);
printf ("The converted value divided by 2 is %d\n\n", i/2);
}
