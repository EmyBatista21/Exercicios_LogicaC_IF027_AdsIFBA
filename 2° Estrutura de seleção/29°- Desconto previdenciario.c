#include <stdio.h>
/*Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor*/

main() {
    float salario, desconto;
    printf("\tPARA SABER SEU DESCONTO PREVIDENCIARIO\t\n");
    printf("Digite o valor do seu salario:");
    scanf("%f", &salario);

    desconto = salario * 0.11;
    if (desconto >= 334.26) {
        desconto  = 334.26;
    } else {
        desconto = salario * 0.11 ;
    }

    printf("Seu desconto eh %.2f", desconto);
    return 0;
}