#include <stdio.h>

//Escreva um programa que leia três números e mostre o maior entre eles

main() 
{
    int n1, n2, n3;

    printf("Insira 3 numeros:");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("CONTANDO...\n");
    
    if ( (n1 > n2) && (n1 > n3) ){
        printf("%i", n1);
    } else if ( (n2 > n1) && (n2 > n3) ) {
            printf("%i", n2);
        } else if ( (n3 > n1) && (n3 > n2) ) {
                printf("%i", n3);
            } else if  ( (n1 == n2) && (n1 && n2 >n3)) {
                printf ("%i %i", n1, n2);
                } else if ( (n1 == n3) && (n1 && n3 > n2) ) {
                    printf("%i %i", n1, n3);
                    } else if ( (n2 == n3) && (n2 && n3 > n1) ) {
                        printf("%i %i", n2, n3);
                        } else {
                            printf("%i %i %i", n1, n2, n3); 
                        }
    return 0;
}
