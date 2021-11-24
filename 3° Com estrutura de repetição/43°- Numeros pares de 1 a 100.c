#include <stdio.h>

/*Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a
100*/

void main () {
    int cont, numero;
    for (cont = 1; cont <= 100; cont++) {
        if (cont < 100) {
           printf("%d- ", cont); 
        } else {
            printf("%d", cont);
        }
    }
}