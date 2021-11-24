#include <stdio.h>

//Escreva um programa para gerar o invertido de um número com três algarismos(exemplo: o invertido de 498 é 894)

main()
{
    int u, d, c;
    int numero; 
    int resto, invertido; 
    printf("Insira um numero inteiro e positivo:");
    scanf("%i", &numero);
    
    c = numero / 100;
    resto = numero % 100;
    d = resto / 10;
    u = resto % 10 ;
    invertido = (u *100) + (d * 10) + (c *1);
    printf("%i", invertido );
    return 0;
} 