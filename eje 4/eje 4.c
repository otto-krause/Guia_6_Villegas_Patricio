#include <stdlib.h>
#include <stdio.h>
void main()
{
int num, I, fact;
printf("Ingrese un numero:\n");
scanf("%d", &num);
I=num;
do
{
 fact=fact*I;
 I--;
}
while (I>1);
printf("El factorial de %d es: %d\n", num, fact);
system("pause");
}
