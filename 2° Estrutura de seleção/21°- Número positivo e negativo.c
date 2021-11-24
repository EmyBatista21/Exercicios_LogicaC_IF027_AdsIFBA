#include <stdio.h>

//Escreva um programa que leia um número e exiba se ele é positivo ou negativo

main ()
{
    int numero;
    printf("Insira um numero:");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("POSITIVO \n");
    } 
        else if (numero < 0) {
            printf("NEGATIVO \n");
        }
            else {
                printf("ZERO \n");
            }
    system("PAUSE"); 
    return 0;
}