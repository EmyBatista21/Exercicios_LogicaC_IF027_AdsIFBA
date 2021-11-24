#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que determine se um dado número N (digitado pelo usuário) é
primo ou não*/

void main() {
    setlocale(LC_ALL,("Portuguese"));
    int n, c, result;
    printf("Insira um número para saber se é primo: ");
    scanf("%d", &n);
    for (c = 2, result = 0; c <= n / 2; c++) {
        if (n % c == 0) {
            result++;
        }
    }
    if (result == 0) {
        printf("Primo");
    } else 
        printf("Nao Primo");
}