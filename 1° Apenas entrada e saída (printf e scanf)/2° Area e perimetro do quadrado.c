#include <stdio.h>
#include <stdlib.h>

/* Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo */
int main()
{
    //Variáveis
    float lado, area, perimetro;
    //Entrada de dados
    printf ("Digite o lado do quadrado:");
    scanf ("%f", &lado);
    //Processamento de dados
    area = lado * lado;
    perimetro = (lado*2) + (lado*2); 
    //Saída de dados
    printf ("A area do quadrado eh %.1f e o perimetro eh %.1f", area, perimetro);
    return 0;
}
