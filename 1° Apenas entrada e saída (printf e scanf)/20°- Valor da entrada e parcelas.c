#include <stdio.h>

/******************************************************************************

Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.
*******************************************************************************/

void main()
{
    float mercadoria;
    int calculomod; 
    float parcela1, parcela2, entrada; 
    printf("Insira o valor da mercadoria: ");
    scanf("%f", &mercadoria);
    calculomod = mercadoria;
    entrada = mercadoria / 3;
    if (calculomod % 3 == 0) {
        parcela1 = entrada; //90
        parcela2 = entrada; //90
    } else {
        entrada = entrada + (calculomod % 3);
        mercadoria = mercadoria / 3 - (mercadoria % 3)*****
        parcela1 = mercadoria / 3;
        parcela2 = parcela1;
    }
    printf("Entrada: R$%.2f \t 1 Parcela: R$%.2f \t 2 Parcela: R$%.2f", entrada, parcela1, parcela2);
}
