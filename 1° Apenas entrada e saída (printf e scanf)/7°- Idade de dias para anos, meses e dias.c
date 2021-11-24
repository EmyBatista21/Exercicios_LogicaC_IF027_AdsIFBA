#include <stdio.h>
/*
*  Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias
*/
main () {
    int diasdevida, dias, meses, anos;
    //Entrada de dados 
    printf("\t Quantos dias de vida voce tem?:");
    scanf("%d", &diasdevida);
    //Processamento de dados
    anos = diasdevida /365;
    meses = (diasdevida%365) / 30;
    dias = ((diasdevida%365) % 30) /7;
    //Saída de dados
    printf("\t %d anos \t %d meses \t %d dias \n", anos, meses, dias );
    system ("Pause") ;
    return 0; 
}

