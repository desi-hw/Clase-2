/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 11*/
#include<stdio.h>
void main()
{
  char c;
  printf("Ingrese una letra minuscula: ");
  scanf("%c", &c);
  switch(c) 
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("El carácter '%c' es una vocal.\n", c);
      break;
    default:
      printf("El carácter '%c' no es una vocal.\n", c);
  }
}
