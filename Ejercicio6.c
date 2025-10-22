/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 6*/
#include<stdio.h>
void main()
{
  int x, fx;
  printf("Dame un número: \n");
  scanf("%d", &x);
  if(x<=3)
    fx=x+3;
  else
    fx=(x*x)+(2*x);
  printf("El valor de f(x) es %d", fx);
}
