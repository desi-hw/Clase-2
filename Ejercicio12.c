/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 12*/
#include<stdio.h>
void main()
{
  int dia;
  printf("Escribe un numero entre el 1 y el 7 \n");
  scanf("%d", &dia);
  switch(dia)
  {
    case 1:
      printf("Lunes");
      break;
    case 2:
      printf("Martes");
      break;
    case 3:
      printf("Miercoles");
      break;
    case 4:
      printf("Jueves");
      break;
    case 5:
      printf("Viernes");
      break;
    case 6:
      printf("Sábado");
      break;
    case 7:
      printf("Domingo");
      break;
    default:
      printf("Opcion invalida");
  }
}
