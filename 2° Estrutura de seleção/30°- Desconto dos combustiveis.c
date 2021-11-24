#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Um posto estÃ¡ vendendo combustÃ­veis com a seguinte tabela de descontos:
Álcool = Até 25 litros, desconto de 2% por litro e Acima de 25 litros, desconto de 4% por litro
Gasolina = Até 25 litros, desconto de 3% por litro e Acima de 25 litros, desconto de 5% por litro.
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.*/

void main () {
    char tipo;
    float litros, desconto, preco, pagar;
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    printf("\t*****POSTO IPIRANGA*****\n");
    printf("GASOLINA(G)         ÁLCOOL(A)\n");
    printf("Escolha o combustível (A OU G): ");
    scanf("%c", &tipo);
    printf("Insira a quantidade de litros: ");
    scanf("%f", &litros);
    switch (tipo)
    {
    case 'G': 
        preco = litros * 2.70;
        if (litros <= 25) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
        break;
    case 'A': 
        preco = litros * 1.90;
        if (litros <= 25) {
            desconto = 0.02;
        } else {
            desconto = 0.04;
        }
        break;
     default: 
        preco = 0;
        printf("Não possuímos esse tipo de combustível");
        break;
    }
    pagar = preco * ( 1 - desconto );
    printf("Combustível: %c      Valor a pagar: %.2f \n", tipo, pagar);
    system("PAUSE");
    system("cls");
}
