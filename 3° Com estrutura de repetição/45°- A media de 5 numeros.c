#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia 5 n�meros, e imprima a m�dia entre eles*/

void main () {
    int cont, divisor;
    float media, numero, soma;
    setlocale(LC_ALL, "Portuguese");
    soma = 0;
    for (cont = 1; cont <= 5; cont++) {
        printf("Insira o %d� n�mero: ", cont);
        scanf("%f", &numero);
        soma = soma + numero; 
        divisor = cont; 
    }
    media = soma / divisor; 
    printf("A m�dia � = %.1f", media);
    
}