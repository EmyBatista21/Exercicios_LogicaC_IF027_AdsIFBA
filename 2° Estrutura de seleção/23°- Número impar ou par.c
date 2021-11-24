#include <stdio.h>

//Escreva um programa que leia um número e imprima se este número é ou não par

main () 
{
    int numero, resto;
    printf("Insira um numero:");
    scanf("%d", &numero);
    resto = numero % 2;

    if (resto == 0) {
        printf("PAR");
    }
    else {
        printf("IMPAR");
    }
    return 0;
}