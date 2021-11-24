#include <stdio.h>> 
//Ler um número inteiro e exibir o seu sucessor


int main()
{
    //Variáveis
    int numero, sucessor;
    //Entrada de dados 
    printf ("Digite um numero inteiro:");
    scanf ("%i", &numero);
    //Processamento de dados
    sucessor = numero + 1;
    //Saída de dados
    printf ("%i", sucessor);
    return 0;
}
