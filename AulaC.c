#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pos-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado; 

    printf("Antes incremento: %d\n", numero1);
    numero1++;
    printf("Após incremento: %d\n", numero1);

    printf("Antes do decremento: %d\n", numero1);
    numero1--;
    printf("Após do decremento: %d\n", numero1);

    //(Pós.Pré-Incremento).............................................................

    //Pós-Incremento
    resultado = numero1++;
    printf("Após pós-incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-Incremento
    resultado = ++numero1;
    printf("Após pré-incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    //(Pós.Pré-Decremento).............................................................

    //Pós-Decremento
    resultado = numero1--;
    printf("Após pós-decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-Decremento
    resultado = --numero1;
    printf("Após pré-decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);







}