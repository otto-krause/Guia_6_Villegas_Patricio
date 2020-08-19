#include <stdlib.h>
#include <stdio.h>
void main()
{
int num, cont, cont1, cont2, I=1;
printf("Ingrese diez n%cmeros:\n", 163);
do
    {
    scanf("%d\n", &num);
    if (num>0)
        cont=cont+1;
    else
        if (num<0)
            cont1=cont1 +1;
        else
            cont2=cont2+1;
    I++;
    }
while(I<11);
printf("%d son positivos, %d son negativos y %d son cero", cont, cont1, cont2);
system("pause");
}
