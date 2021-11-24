#include <stdio.h>

//Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5. 

main() {
    float n1, n2, n3, media;
    
    n1 = 2;
    n2 = 6;
    n3 = 5;

    if ((n1 > n2) && (n1 > n3)) {
        n1 = n1 * 5;
        n2 = n2 * 2.5 ;
        n3 = n3 * 2.5 ;
    } else if ((n2 > n1) && (n2 > n3)) {
        n2 = n2 * 5;
        n1 = n1 * 2.5;
        n3 = n3 * 2.5;
    } else {
        n3 = n3 * 5;
        n1 = n1 * 2.5;
        n2 = n2 * 2.5;
    }

    media = (n1 + n2 + n3) / 3;

    printf("A media eh %.2f", media);

    return 0;
}