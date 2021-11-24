#include <stdio.h>

//Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores

int main() {
    float v1, v2, v3, soma; 
    printf("Digite tres valores:");
    scanf("%f %f %f", &v1, &v2, &v3);
    if ((v1 > v3) && (v2 > v3)) {
        soma = v1 + v2;
    } else if ((v1 > v2) && (v3 > v2)) {
        soma = v1 + v3;
    } else if ((v2 > v1) && (v3 > v1)) {
        soma = v2 + v3;
    } else {
        printf("So podemos somar dois valores maiores\n");
    }
    printf("%.2f", soma); 
    return 0;
}