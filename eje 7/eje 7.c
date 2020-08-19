#include  <stdio.h>
#include  <stdlib.h>
int  main ()
{
int vendedor=1,tg, uv, uni, uni2, dias=1, tg1, ventam;
do
    {
    printf ( " Ingrese las ventas del vendedor %d\n " , vendedor);
    do
        {
        printf ("Ventas del d%ca: %d\n " , 161 , dias);
        scanf ("%d", &uni);
        uv = uv + uni;
        if (uni>uni2)
            {
            uni2 = uni;
            ventam = vendedor;
            }
        dias++;
        }
    while (dias < 16 );
    dias = 1;
    tg = tg + uv;
    printf ( " Las ventas totales del vendedor %d son %d \n", vendedor, uv);
    vendedor++;
    }
while(vendedor<21);
printf ( " Las ventas totales de la empresa son % d y el vendedor %d tiene la mayor venta diaria " , tg, vendedor);
return  0 ;
}
