#include <stdio.h>

//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius
main () 
{
    float fahrenheit, celsius;
    
    printf ("Digite a temperatura em Fahrenheit:");
    scanf("%f", &fahrenheit);
   
    celsius = ((fahrenheit - 32) * 5)/9;
  
    printf("Temperatura em Graus Celsius:%.2f", celsius);
    return 0;
}