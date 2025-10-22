/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 16*/
#include <stdio.h>
void main() 
{
  float x1, y1, x2, y2, m;
  printf("Ingrese las coordenadas del primer punto (x1,y1) separados por comas: \n");
  scanf("%f,%f", &x1, &y1);
  printf("Ingrese las coordenadas del segundo punto (x2,y2) separados por comas: \n");
  scanf("%f,%f", &x2, &y2);
  if (x1 == x2) 
  {
    printf("La pendiente no está definida (los puntos forman una línea vertical).\n");
  }
  else
  {
    m = (y2 - y1) / (x2 - x1);
    printf("La pendiente de la recta que pasa por los puntos (%.2f, %.2f) y (%.2f, %.2f) es: %.2f\n", x1, y1, x2, y2, m);
  }
}
