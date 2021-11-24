#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

/* Escreva um programa que calcule o resto da divisão de A por B (número inteiros e
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado. */ 
void main() {
    int numerador, denominador;
    setlocale(LC_ALL,"Portuguese");
    printf("Insira dois números para pegar o resto da divisão: ");
    scanf("%d %d", &numerador, &denominador);
    printf("%d %% %d = ", numerador, denominador);  
    while ( numerador >= denominador) {
        numerador = numerador - denominador;
    }
    printf("%d", numerador); 
}