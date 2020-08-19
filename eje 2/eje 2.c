#include <stdio.h>
#include <stdlib.h>
void main()
{
int acu, num, I=0, prom, num1;
printf("Ingrese 15 valores:\n");
do
    {
    scanf("%d\n", &num);
    acu= acu+num;
    if (num>num1)
       {
       num1=num;
       }
     I=I+1;
    }
while(I<14);
prom=acu/15;
printf("El promedio es %d y el n%cmero mas alto es %d.\n",prom, 163, num1);
system("pause");
}
