/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 5*/
#include <stdio.h>
void main()
{
  int precio=7, edad;
  float desc1, desc2;
  printf("Dime tu edad: \n");
  scanf("%d", &edad);
  if(edad<=5)
  {
    desc1=precio-(precio*0.60);
    printf("El precio del boleto sera: %.2f", desc1);
  }
  else
  {
    if(edad>=60)
    {
      desc2=precio-(precio*0.55);
      printf("El precio del boleto sera: %.2f", desc2);
    }
    else
      printf("El precio es de %d", precio);
  }
}
