/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 7*/
#include<stdio.h>
void main()
{
  int num;
  printf("Escribe un numero de un digito: \n");
  scanf("%d", &num);
  if(num==1)
    printf("Acceso permitido");
  else
  {
    if(num==2)
      printf("Acceso permitido");
    else
    {
      if(num==3)
        printf("Acceso permitido");
      else
        printf("Acceso denegado");
    }
  }  
}
