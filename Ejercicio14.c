#include<stdio.h>
void main()
{
  float hora1, precio, salario, hora2, hora3;
  printf("Ingrese las horas trabajadas en la semana: ");
  scanf("%f", &hora1);
  printf("Ingrese el precio por hora: ");
  scanf("%f", &precio);
  if (hora1 <= 40) 
  {
    salario = hora1 * precio;
  } 
  else 
  {
    if (hora1 <= 50) 
    {
      hora2 = hora1 - 40;
      salario = (40 * precio) + (hora1 * precio * 1.5);
    } 
    else 
    {
      hora2 = 10; 
      hora3 = hora1 - 50;
      salario = (40 * precio) 
      + (hora2 * precio * 1.5) 
      + (hora3 * precio * 2);
    }
    printf("El salario semanal es: %.2f\n", salario);
  }
}
