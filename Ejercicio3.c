/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 3*/
#include<stdio.h>
void main()
{
  int num;
  printf("Escriba un numero: \n");
  scanf("%d", &num);
  if(num % 2 == 0)
  {
    printf("El numero es par \n");
    if(num % 3 == 0)
    {
      printf("El numero es multiplo de tres \n");
    }
    else
    {
      printf("El numero no es multipo de tres \n");
    }
  }
  else
  {
    printf("El numero no es par \n");
  }
}
