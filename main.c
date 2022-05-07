#include <stdio.h>
#include <stdlib.h>


/* Variaveis Globais */

float Vin = 0.0, Vled = 0.0, Iled = 0.0, R = 0.0;

int main(void) {
 /* Calculador de LED*/

  printf("LED CALC V.1\n");

  printf("Digite o valor de VIN\nEm Volts: ");
  scanf("%f", &Vin);
  printf("\n\n");
  printf("Digite o valor de Vled\nEm volts:");
  scanf("%f", &Vled);
  printf("\n\n");
  scanf("Digite o valor de Iled\nEm Amperes:");
  scanf("%f", &Iled);

  R = (Vin-Vled)/Iled;
  
  printf("Vin = %.2f\n\n", Vin);
  printf("Vled = %.2f\n\n", Vled);
  printf("Iled = %.2f\n\n", Iled);
  printf("O resistor para o LED tem o valor de: %.2f Ohms\n\n", R);

  system("PAUSE");
}
