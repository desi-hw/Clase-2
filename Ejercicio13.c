/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 13*/
#include <stdio.h>
int main()
{
  int opcion;
  float area, base1, base2, altura;
  do 
  {
    printf("\n     CALCULO DE AREAS     \n");
    printf("¿Que desea calcular? \n");
    printf("1) AREA DEL TRIANGULO \n");
    printf("2) AREA DEL TRAPECIO \n");
    printf("3) AREA DEL RECTANGULO \n");
    printf("4) Salir \n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    switch(opcion) 
    {
      case 1:
        printf("Dame el valor de la base: \n");
        scanf("%f", &base1);
        printf("Dame el valor de la altura: \n");
        scanf("%f", &altura);
        area = (base1 * altura) / 2;
        printf("El valor del area es: %.2f\n", area);
        break;
      case 2:
        printf("Dame el valor de la base mayor: \n");
        scanf("%f", &base1);
        printf("Dame el valor de la base menor: \n");
        scanf("%f", &base2);
        printf("Dame el valor de la altura: \n");
        scanf("%f", &altura);
        area = ((base1 + base2) * altura) / 2;
        printf("El valor del area es: %.2f\n", area);
        break;
      case 3:
        printf("Dame el valor de la base: \n");
        scanf("%f", &base1);
        printf("Dame el valor de la altura: \n");
        scanf("%f", &altura);
        area = base1 * altura;
        printf("El valor del area es: %.2f\n", area);
        break;
      case 4:
        printf("Saliendo del programa.\n");
        break;
      default:
        printf("Opcion invalida, intente de nuevo.\n");
    }
  } 
  while (opcion != 4);
  return 0;
}
