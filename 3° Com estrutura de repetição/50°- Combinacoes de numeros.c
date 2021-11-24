#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações: */

void main() {
    int cont, n, m;
    setlocale(LC_ALL,"Portuguese");
    printf("Insira um número para combinar: ");
    scanf("%d", &n);
    m = n;
    for(cont = 1; cont <= n; cont++, m--) {
        printf("%d %d\n", cont, m);
    }

}