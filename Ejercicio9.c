/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 9*/
#include<stdio.h>
void main()
{
  int num[5], i, men;
  printf("Dame 5 numeros enteros enteros: \n");
  for(i=0; i<5; i++)
  {
    scanf("%d", &num[i]);
    men=num[0];
  }
  for(i=1; i<5; i++)
  {
    if(num[i]<men)
    {
      men=num[i];
    }
  }
  printf("El numero menor es: %d", men);
}
