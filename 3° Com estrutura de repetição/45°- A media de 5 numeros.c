#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia 5 números, e imprima a média entre eles*/

void main () {
    int cont, divisor;
    float media, numero, soma;
    setlocale(LC_ALL, "Portuguese");
    soma = 0;
    for (cont = 1; cont <= 5; cont++) {
        printf("Insira o %d° número: ", cont);
        scanf("%f", &numero);
        soma = soma + numero; 
        divisor = cont; 
    }
    media = soma / divisor; 
    printf("A média é = %.1f", media);
    
}