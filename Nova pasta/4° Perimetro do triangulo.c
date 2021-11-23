#include <stdio.h>

/* Dado os três lados de um triângulo determinar o perímetro do mesmo */
main () 
{
    //Variáveis
    int l1, l2, l3, perimetro;
    //Entrada de dados
    printf ("Digite os tres lados do triangulo:");
    scanf ("%i %i %i", &l1, &l2, &l3);
    //Processamento de dados
    perimetro = l1 + l2 + l3;
    //Saída de dados
    printf ("Perimetro do triangulo: %i", perimetro); 
    return(0);
}