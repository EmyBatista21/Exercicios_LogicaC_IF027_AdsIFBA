#include <stdio.h> 

main()
{
    int p1, p2, p3, p4;
    int numeroi, numero, dv;
    char dv1;

    printf("Insira 4 digitos:");
    scanf("%d", &numero);

    numeroi = numero;   
    p4 = numero % 10;
    numero= numero /  10;
    p3 = numero % 10;
    numero= numero / 10;
    p2 = numero % 10;
    p1 = numero / 10;

    dv = (p1*5) + (p2*4) + (p3*3) + (p4*2);
    dv = dv % 11;
    dv = 11 - dv; 

    if (dv == 10) {
        dv1 = 'X';
        printf("%d-%c \n", numeroi, dv1);
    } else {
        printf("%d-%d \n", numeroi, dv);
    }
    system("PAUSE");
}