#include <stdlib.h>
#include <stdio.h>
void main()
{
int base, expo, I, pot=1 ;
printf("Ingrese la base y el exponente:\n");
scanf("%d\n %d", &base, &expo);
while(I<expo)
    {
    pot=pot*base;
    I++;
    }
printf("La potencia de %d es: %d\n", base, pot);
system("pause");
}
