#include <stdio.h>

//Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.
int main()
{
    float diametro, raio, altura, volume, pi;
   
    pi = 3.14;
    printf ("Digite o diametro do cilindro:");
    scanf(" %f", &diametro);
    printf("Digite a altura do cilindro:");
    scanf(" %f", &altura);
    
    raio = diametro / 2;
    volume = pi*(raio*raio)*altura;

    printf("Volume do cilindro %.2f m^3", volume); 
    return 0;
}
