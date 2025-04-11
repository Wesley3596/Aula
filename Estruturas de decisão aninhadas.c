#include <stdio.h>

int main(){

    int idade;
    float renda;

    // >= 60, <=18
    // <= 2000 R$

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal:\n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60){
        if (renda < 2000){
            printf("Você tem direito ao desconto!\n");
        }else{
            printf(" Você não tem direito ao desconto devido a sua renda.\n");
        }
    } else{
        printf("Fora dos critérios referente a idade\n");
    }







}