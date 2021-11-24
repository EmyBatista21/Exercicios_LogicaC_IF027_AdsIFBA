#include <stdio.h> 

//Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês

main() {
    int mes;
    printf("Digite numero do mes:");
    scanf("%d", &mes);

    if (mes <= 12) {
        if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) {
            printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10,\n11, 12, 13, 14, 15, 16, 17, 17, 19, 20,\n21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31");
        } else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) {
            printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10,\n11, 12, 13, 14, 15, 16, 17, 17, 19, 20,\n21, 22, 23, 24, 25, 26, 27, 28, 29, 30"); 
        } else {
            printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10,\n11, 12, 13, 14, 15, 16, 17, 17, 19, 20,\n21, 22, 23, 24, 25, 26, 27, 28");
        }
    } else {
        printf("Esse mes nao existe");
    }
    return 0;
}