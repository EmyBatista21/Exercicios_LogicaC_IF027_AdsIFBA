#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um valor e imprima todas as poss�veis combina��es em
que o lan�amento de um par de dados tenha como resultado da soma dos valores dos
dados o n�mero lido. Por exemplo, se a entrada for o n�mero 7, o programa deve
imprimir as seguintes combina��es: */

void main() {
    int cont, n, m;
    setlocale(LC_ALL,"Portuguese");
    printf("Insira um n�mero para combinar: ");
    scanf("%d", &n);
    m = n;
    for(cont = 1; cont <= n; cont++, m--) {
        printf("%d %d\n", cont, m);
    }

}