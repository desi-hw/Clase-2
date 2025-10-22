/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 4*/
#include<stdio.h>
void main()
{
  int num1, num2;
  printf("Dame dos numeros separados por comas: \n");
  scanf("%d, %d", &num1, &num2);
  if(num1<num2)
  {
    printf("%d es menor que %d", num1, num2);
  }
  else
  {
    if(num1>num2)
      printf("%d es mayor que %d", num1, num2);
    else
      printf("%d y %d son iguales", num1, num2);
  }
}
