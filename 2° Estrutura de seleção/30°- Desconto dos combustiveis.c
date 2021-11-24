#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
�lcool = At� 25 litros, desconto de 2% por litro e Acima de 25 litros, desconto de 4% por litro
Gasolina = At� 25 litros, desconto de 3% por litro e Acima de 25 litros, desconto de 5% por litro.
Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel
(codificado da seguinte forma: A-�lcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o pre�o do litro da gasolina � R$ 2,70 e o pre�o do litro
do �lcool � R$ 1,90.*/

void main () {
    char tipo;
    float litros, desconto, preco, pagar;
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    printf("\t*****POSTO IPIRANGA*****\n");
    printf("GASOLINA(G)         �LCOOL(A)\n");
    printf("Escolha o combust�vel (A OU G): ");
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
        printf("N�o possu�mos esse tipo de combust�vel");
        break;
    }
    pagar = preco * ( 1 - desconto );
    printf("Combust�vel: %c      Valor a pagar: %.2f \n", tipo, pagar);
    system("PAUSE");
    system("cls");
}
