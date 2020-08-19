#include <stdio.h>
#include <stdlib.h>
void main()
{
int I=1, s, cont, cont1;
do
    {
    printf("Ingrese su sueldo:\n");
    scanf("%d", &s);
    if (s>2000)
        {
        cont=cont+1;
        }
    else
        {
        cont1=cont1+1;
        }
    I++;
    }
while(I<21);
printf("Hay %d que cobran mas de 2000 pesos y %d que conbran menos", cont, cont1);
return 0;
}
