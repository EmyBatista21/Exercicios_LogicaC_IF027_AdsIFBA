#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

/* Escreva um programa que calcule o resto da divis�o de A por B (n�mero inteiros e
positivos), ou seja, A % B, atrav�s de subtra��es sucessivas. Esses dois valores s�o
passados pelo usu�rio atrav�s do teclado. */ 
void main() {
    int numerador, denominador;
    setlocale(LC_ALL,"Portuguese");
    printf("Insira dois n�meros para pegar o resto da divis�o: ");
    scanf("%d %d", &numerador, &denominador);
    printf("%d %% %d = ", numerador, denominador);  
    while ( numerador >= denominador) {
        numerador = numerador - denominador;
    }
    printf("%d", numerador); 
}