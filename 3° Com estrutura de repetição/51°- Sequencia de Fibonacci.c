#include <stdio.h>
#include <locale.h> 

/*A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).*/

void main () {
    int n1, n2, atual, icont, vezes; 
    n1 = n2 = 1;
    printf("Quantas vezes iremos contar?:");
    scanf("%d", &vezes);
    if (icont >= vezes) {
            printf("%d", n1);
        }
    for (icont = 1; icont <= vezes; icont++) {
        if (icont < vezes) {
            atual = n1 + n2; 
            printf("%d, ", n1);
            n1 = n2;
            n2 = atual;
        }
        if (icont == vezes)
            printf("%d", n1);
    }

}
