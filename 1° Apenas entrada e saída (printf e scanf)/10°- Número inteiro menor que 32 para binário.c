#include <stdio.h>
//Converter um inteiro informado menor que 32 para sua representação em binário

main()
{
    int numero;
    char numerob2;
    int b0, b1, b2, b3, b4, b5;

    printf("Insira um numero >0 e <32: ");
    scanf("%i", &numero);
    
    b5 = numero % 2;
    numero = numero /2;
    b4 = numero % 2;
    numero = numero /2;
    b3 = numero % 2;
    numero = numero /2;
    b2 = numero % 2;
    numero = numero /2;
    b1 = numero % 2;
    numero = numero /2; 
    b0 = numero % 2;
    
    printf("%i %i %i %i %i %i", b0, b1, b2, b3, b4, b5 );
    system ("PAUSE");
    return 0;
}