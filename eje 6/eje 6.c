#include <stdlib.h>
#include <stdio.h>
void main()
{
int alum=1, I,acu=0, acu1=0;
float nota,prom, prom1;
do
    {
    printf("Ingrese las tres notas del alumno %d:\n", alum);
    do
        {
        scanf("%f\n", &nota);
        acu=acu+nota;
        I++;
        }
     while(I<=2);
     prom=acu/2;
     acu1=acu1+acu;
     printf("El promedio del alumno es: %.1f\n", prom);
     I=1;
     acu=0;
     alum++;
    }
while(alum<=5);
prom1=acu1/5;
printf("El promedio del salon es: %.1f", prom1);
return 0;
}
