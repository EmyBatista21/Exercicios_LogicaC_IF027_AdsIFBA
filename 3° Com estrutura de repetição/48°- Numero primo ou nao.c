#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que determine se um dado n�mero N (digitado pelo usu�rio) �
primo ou n�o*/

void main() {
    setlocale(LC_ALL,("Portuguese"));
    int n, c, result;
    printf("Insira um n�mero para saber se � primo: ");
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