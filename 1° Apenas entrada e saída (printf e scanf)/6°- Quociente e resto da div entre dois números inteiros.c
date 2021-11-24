#include <stdio.h>

//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles
 main()
{
    int dividendo, divisor;
    int quociente, resto;
    //Entrada de dados
    printf ("Digite o dividendo:");
    scanf ("%i", &dividendo);
    printf ("Digite o divisor:");
    scanf ("%i", &divisor);
    //Processamento de dados
    quociente = dividendo / divisor; 
    resto = dividendo % divisor;
    //Saída de dados
    printf ("O resultado = %i    O resto = %i", quociente, resto); 
    return 0;
}
