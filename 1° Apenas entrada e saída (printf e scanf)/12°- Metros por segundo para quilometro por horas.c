#include <stdio.h>

//Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6.

main()
{
    float velocidadeMS, velocidadeKH;

    
    printf("Insira a velocidade (m/s):");
    scanf("%f", &velocidadeMS);

 
    velocidadeMS = velocidadeMS / 1;
    velocidadeKH = velocidadeMS * 3.6;

    
    printf("K/H = %.3f", velocidadeKH);
    return 0;
}