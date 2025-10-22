/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 9*/
#include<stdio.h>
void main()
{
  float a,b,c,d,e;
  printf("Dame 5 números separados por comas: \n");
  scanf("%f,%f,%f,%f,%f", &a, &b, &b, &c, &d, &e);
  if(a<b)
    if(b<c)
      if(c<d)
        if(d<e)
          printf("El numero menor es %f", a);
}
