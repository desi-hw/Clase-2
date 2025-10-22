/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 15*/
#include <stdio.h>
void main() 
{
  int num;
  printf("Ingrese el número de la carta (1-12): ");
  scanf("%d", &num);
  if (num >= 1 && num <= 12) 
  {
    switch (num) 
    {
      case 1:
        printf("As\n");
        break;
      case 10:
        printf("Sota\n");
        break;
      case 11:
        printf("Caballo\n");
        break;
      case 12:
        printf("Rey\n");
        break;
      default:
        printf("No es as ni figura\n");
        break;
    }
  } 
  else 
  {
    printf("Este no es un número de una carta de la baraja española\n");
  }
}
