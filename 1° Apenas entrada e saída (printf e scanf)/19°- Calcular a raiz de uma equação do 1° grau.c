#include <stdio.h>

//Escreva um programa que calcule a raiz de uma equação do primeiro grau

main()
{
    float ax, b, x;
    //Entrada de dados
    printf("Digite os coeficientes a e logo em seguida o b da funcao afim:");
    scanf("%f %f", &ax, &b);
    //Processamento de dados
   // x = (- b +- / (b * b) - 4 * a * c) / 2*a
    
    if (b > 0) {
        b = b * -1;
        x = b/ax;
    } else if (b < 0) {
        b = b * -1;
        x = b/ax;
        } else {
            x = b/ax;
        }
    //Saída de dados
    printf("x = %.3f", x);
    system ("PAUSE");
    return 0;
}
