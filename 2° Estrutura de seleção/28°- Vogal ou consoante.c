#include <stdio.h> 

//Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.

main() {
    char letra;

    printf("Digite uma letra:");
    scanf("%c", &letra);

    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || 
        (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')) {
        printf("Vogal");
    } else {
        printf("Consoante");
    }
}