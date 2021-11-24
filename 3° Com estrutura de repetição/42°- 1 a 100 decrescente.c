#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem
decrescente*/
void main () {
    setlocale(LC_ALL, "Portuguese");
    int numero, cont;
    cont = 100;
    while (cont > 0) {
        printf("%d...", cont);
        cont--;
    }
}