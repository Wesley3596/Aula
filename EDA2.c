#include <stdio.h>

int main(){

    int idade;
    float renda;
    int dependentes;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal:\n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes:\n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
            if (dependentes > 2){
                printf("Você atende a todos os critérios.\n");
            } else {
                printf("Você não atende ao numero de dependentes.\n");
            }

        }else {
            printf("Você não atende ao requisito renda.\n");
        }
        
    } else {
        printf("Você não atende ao requisito idade.\n");
    }
    








}