#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que imprima todos os n�meros de 1 at� 100, inclusive, e a soma
de todos eles*/

void main () {
    setlocale(LC_ALL, "Portuguese");
    int cont, numero, soma;
    for (cont = 1, soma = 0; cont <= 100; cont++) {
        printf("%d- ", cont); 
        soma = soma + cont; 
    }
     printf("\nA soma de todos os n�meros exibidos � %d ", soma);
}