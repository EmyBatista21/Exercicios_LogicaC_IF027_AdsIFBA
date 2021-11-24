#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 100

void main () {
    int cont, num;
    setlocale(LC_ALL,"Portuguese");
    cont = 0;
    num = 1;
    while (cont < 100) {
        printf("%d...", num);
        if (num == 26 || num == 51 || num == 76) {
            printf("\n");
        } 
        num++;
        cont++;
    }
}