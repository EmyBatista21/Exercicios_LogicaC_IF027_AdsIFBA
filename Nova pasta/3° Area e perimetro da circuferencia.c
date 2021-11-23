#include <stdio.h>
#include <stdlib.h>

/* Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma */
int main () 
{
    //Variáveis
    float diametro, raio;
    float area, perimetro, pi;
    //Entrada de dados
    pi = 3.14;
    printf ("Digite o diametro do circulo:");
    scanf ("%f", &diametro);
    //Processamento de dados
    raio = diametro / 2 ;
    area = (raio * raio) * pi ; 
    perimetro = (2* pi) * raio;
    //Saída de dados
    printf ("Area = %.2f Cm^2   Perimetro = %.2f Cm^2", area, perimetro);
    return(0); 
}









