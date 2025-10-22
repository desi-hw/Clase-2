/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 8*/
#include<stdio.h>
void main()
{
  int num, dig1, dig2, suma;
  printf("Dame un numero: \n");
  scanf("%d", &num);
  if(num>9 && num<=99 || num<-9 && num>=-99)
  {
    if(num<0)
      num=-num;
    dig1=num/10;
    dig2=num%10;
    suma=dig1+dig2;
    printf("La suma de los dígitos es: %d \n", suma);
    if(dig1 % 2 == 0)
      printf("El primer digito es par \n");
    if(dig2 % 2 == 0)
      printf("El segundo digito es par \n");
  }
}
