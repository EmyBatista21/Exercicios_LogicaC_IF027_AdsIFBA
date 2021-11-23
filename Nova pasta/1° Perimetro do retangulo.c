#include <stdio.h>
#include <stdlib.h>

/* Dado o tamanho da base e da altura de um retangulo, calcular a sua área e o seu
perímetro. */
main()
{
    //Variaveis
    float base, altura, perimetro; 
    //Entrada de dados
    printf ("Digite a base do retangulo:");
    scanf ("%f", &base);
    printf ("Digite a altura do retangulo:");
    scanf ("%f", &altura);
    //Processamento de dados
    perimetro = (base*2) + (altura*2);
    //Sa�da de dados
    printf ("O perimetro do retangulo eh %.1f", perimetro);
    return 0;
}
