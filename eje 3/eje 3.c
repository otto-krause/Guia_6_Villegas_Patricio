#include <stdio.h>
#include <stdlib.h>
void main()
{
int num, num1, limite, inicio;
printf("Ingrese dos numeros:\n");
scanf("%d\n %d", &num, &num1);
system("cls");
if (num>num1)
    {
    limite=num;
    inicio=num1;
    }
else
    {
    limite=num1;
    inicio=num;
    }
do
    {
    inicio=inicio+1;
    printf("%d\n", inicio);
    }
while(inicio<limite-1);
return 0;
}
